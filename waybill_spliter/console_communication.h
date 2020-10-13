#include "product_struct.h"
#ifndef HOMEWORK_1_STRUCTREADING_H
#define HOMEWORK_1_STRUCTREADING_H

int count_reading();
product_struct struct_reading( int i );
void new_waybill_output( int count, product_struct const * waybill, char num );
void cant_allocate( product_struct * waybill, product_struct * first, int number );

#endif //HOMEWORK_1_STRUCTREADING_H
