#include "waybillSplit.h"
#include "productStruct.h"

void quickSort(productStruct *arr, int first, int last)
{
    if (first < last)
    {
        int left = first, right = last, middle = arr[(left + right) / 2].price;
        do
        {
            while (arr[left].price < middle) left++;
            while (arr[right].price > middle) right--;
            if (left <= right)
            {
                int tmp = arr[left].price;
                arr[left].price = arr[right].price;
                arr[right].price = tmp;
                left++;
                right--;
            }
        } while (left <= right);
        quickSort(arr, first, right);
        quickSort(arr, left, last);
    }
}

int split(productStruct * waybill, productStruct * firstNew, productStruct * secondNew, int count){
    quickSort(waybill, 0, count - 1);

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
