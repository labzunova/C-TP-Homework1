#include <stdio.h>
#include <malloc.h>
#include "consoleCommunication.h"
#include "productStruct.h"
#include "waybillSplit.h"

int main() {
    int count = countReading();

    productStruct *waybill;
    waybill = (productStruct*) malloc(count * sizeof(productStruct));

    for (int i = 0; i < count; i++){
        //printf("%d product:\n",i+1);
        waybill[0] = structReading();
    }

    productStruct *firstNew, *secondNew;
    if (split(firstNew, secondNew)){

    }

    free(firstNew);
    free(secondNew);
    free(waybill);
    return 0;
}
