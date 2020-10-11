#include "gtest/gtest.h"
extern "C" {
#include "../waybill_spliter/waybill_split.h"
}

TEST( tests,sorting_tests_one_to_twenty ) // проверка сортировки последовательноти от 1 до 20
{
    auto *arr_to_sort = ( product_struct* ) malloc( 20 * sizeof( product_struct ) );
    for ( int i = 0; i < 20; i++ ) arr_to_sort[i].price = i;
    quick_sort(arr_to_sort, 0, 19);
    for ( int i = 0; i < 20; i++ ) ASSERT_EQ( arr_to_sort[i].price, 19-i );
    free( arr_to_sort );
}

TEST( tests,sorting_tests_random ) // проверка, сходится ли результат quick_sort с отсортированным другим способом таким же массивом(в данном случае bubble sort)
{
    auto *arr_to_quicksort = ( product_struct* ) malloc( 20 * sizeof( product_struct ) );
    float arr_to_bubblesort[20];
    srand( 100 );
    for ( int i = 0; i < 20; i++ )
    {
        arr_to_bubblesort[i] = rand();
        arr_to_quicksort[i].price = arr_to_bubblesort[i];
    }
    quick_sort( arr_to_quicksort,0,19 );

    for( int i = 0; i < 19; i++ ) // bubblesort
        for( int j = 0; j < 19-i; j++ )
        {
            if ( arr_to_bubblesort[j] < arr_to_bubblesort[j + 1] )
            {
                float cache = arr_to_bubblesort[j];
                arr_to_bubblesort[j] = arr_to_bubblesort[j + 1];
                arr_to_bubblesort[j + 1] = cache;
            }
        }

    for ( int i = 0; i < 20; i++ ) ASSERT_EQ( arr_to_quicksort[i].price, arr_to_bubblesort[i] );
    free( arr_to_quicksort );
}


TEST( tests, split_test ) // проверка правильности разделения на две накладные накладной, состоящей из цен от 1 до 10
{
    auto * arr_to_split = ( product_struct* ) malloc(10 * sizeof( product_struct ) );
    auto * first_new = ( product_struct* ) malloc( 10 * sizeof( product_struct ) );
    auto * second_new = ( product_struct* ) malloc(10 * sizeof( product_struct ) );
    for ( int i = 0; i < 10; i++ ) arr_to_split[i].price = i+1;
    int first_count = ( split( arr_to_split, first_new, second_new, 10 ) ),
        second_count = 10 - first_count;

    float first_correct_arr[5] = { 10, 7, 5, 4, 1 };
    float second_correct_arr[5] = { 9, 8, 6, 3, 2 };

    ASSERT_EQ( first_count,5 );
    ASSERT_EQ( second_count,5 );
    for( int i = 0; i < first_count; i++ ) ASSERT_EQ( first_new[i].price, first_correct_arr[i] );
    for( int i = 0; i < second_count; i++ ) ASSERT_EQ( second_new[i].price, second_correct_arr[i] );

    free( arr_to_split );
    free( first_new );
    free( second_new );
}


