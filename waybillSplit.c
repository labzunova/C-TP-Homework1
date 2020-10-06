#include "waybillSplit.h"

int split(productStruct * waybill, productStruct * firstNew, productStruct * secondNew, int count){
    // TODO: waybill sort
    firstNew[0] = waybill[0];
    secondNew[0] = waybill[1];
    int firstCounter = 1, secondCounter = 1;
    float firstSum = firstNew[0].price, secondSum = secondNew[0].price;
    for (int i = 2; i < count; i++){
        if (firstSum < secondSum) {
            firstNew[firstCounter] = waybill[i];
            firstSum += waybill[i].price;
            firstCounter++;
        } else {
            secondNew[secondCounter] = waybill[i];
            secondSum += waybill[i].price;
            secondCounter++;
        }
    }

    return firstCounter;
}
