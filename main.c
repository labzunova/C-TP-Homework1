#include <malloc.h>
#include "consoleCommunication.h"
#include "waybillSplit.h"

int main() {
    int count = countReading();

    productStruct *waybill;
    waybill = (productStruct*) malloc(count * sizeof(productStruct));

    for (int i = 0; i < count; i++){
        waybill[i] = structReading(i);
    }

    productStruct *firstNew, *secondNew;
    firstNew = (productStruct*) malloc(count * sizeof(productStruct));
    secondNew = (productStruct*) malloc(count * sizeof(productStruct));
    int firstCount = (split(waybill, firstNew, secondNew, count)), secondCount = count - firstCount;

    newWaybillOutput(firstCount, firstNew, '1');
    newWaybillOutput(secondCount, secondNew, '2');

    free(firstNew);
    free(secondNew);
    free(waybill);
    return 0;
}
