#include <malloc.h>
#include "console_communication.h"
#include "waybill_split.h"

int main()
{
    int count = count_reading();

    product_struct *waybill;
    if ( !waybill = ( product_struct* ) malloc(count * sizeof( product_struct ) ) ) cant_allocate( nullptr, nullptr, 0);

    for ( int i = 0; i < count; i++ ) waybill[i] = struct_reading(i);

    product_struct *first_new, *second_new;
    if ( !first_new = ( product_struct* ) malloc( count * sizeof( product_struct ) ) ) cant_allocate( waybill, nullptr 1 );
    if ( !second_new = ( product_struct* ) malloc(count * sizeof( product_struct ) ) ) cant_allocate( waybill, first_new, 1);
    int first_count = ( split( waybill, first_new, second_new, count ) ),
        second_count = count - first_count;

    new_waybill_output( first_count, first_new, '1' );
    new_waybill_output( second_count, second_new, '2' );

    free( first_new );
    free( second_new );
    free( waybill );
    return 0;
}
