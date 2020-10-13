#include <stdio.h>
#include <stdlib.h>
#include "product_struct.h"

void cant_allocate( product_struct * waybill, product_struct * first, int number ) // number показывает, на каком из трех выделений памяти произошла ошибка чтобы очистить заранее выделенную память
{
    printf_s( "Error: can't allocate memory" );
    if ( number != 0 ) free( waybill );
    if ( number == 2 ) free( first );
    exit( 0 );
}

int count_reading()
{
    int count = 0;
    printf( "\nEnter an amount of waybill positions: \n" );
    while ( ( scanf( "%d", &count) != 1 )||( count <= 0 ) )  //TODO: integer check
    {
        printf( "Enter a POSITIVE INTEGER amount of waybill positions: \n" );
        while( getchar() != '\n' ); // Чистим буфер
    };
    return count;
}

product_struct struct_reading( int i )
{
    struct product_struct* product;
    printf_s( "       %d product:\n", i+1 );

    printf_s( "Enter product vendor code: \n" );
    while ( ( scanf( "%d", &product->vendor_code ) != 1 ) || ( &product->vendor_code <= 0 ) )   //TODO: integer check
    {
        printf_s(" !Enter a POSITIVE INTEGER product vendor code: \n");
        while(getchar() != '\n'); // Чистим буфер
    };

    printf_s( "Enter an amount of this product: \n" );
    while ( ( s canf(" %d", &product->amount) != 1 )||( &product->amount < 0 ) )//TODO: integer check
    {
        printf_s( " !Enter a POSITIVE INTEGER number of products: \n" );
        while( getchar() != '\n' );
    };

    printf_s( "Enter a price of this product: \n" );
    while ( scanf( "%f", &product->price ) != 1 )
    {
        printf_s( " !Enter a correct product price: \n" );
        while( getchar() != '\n' );
    };

    printf_s( "Enter a weight of this product: \n" );
    while ( scanf( "%f", &product->weight ) != 1 )
    {
        printf_s( " !Enter a correct product weight: \n" );
        while( getchar() != '\n' );
    };

    return *product;
}

void new_waybill_output( int count, struct product_struct const * waybill, char num )
{
    printf_s( "\n       %c new waybill:\n", num );
    for ( int i = 0; i < count; i++ ) printf_s("%d: Vendor code: %d\n   Price: %f\n", i+1, waybill[i].vendor_code, waybill[i].price );
    printf_s( "\n" );
}

