    #include "waybill_split.h"

    void quick_sort(product_struct *arr, int first, int last)
    {
        if (first < last)
        {
            int left = first, right = last;
            float middle = arr[(left + right) / 2].pri  ce;
            do
            {
                while (arr[left].price > middle) left++;
                while (arr[right].price < middle) right--;
                if (left <= right)
                {
                    struct product_struct tmp = arr[left];
                    arr[left] = arr[right];
                    arr[right] = tmp;
                    left++;
                    right--;
                }
            } while (left <= right);
            quick_sort(arr, first, right);
            quick_sort(arr, left, last);
        }
    }

    int split(product_struct * waybill, product_struct * firstNew, product_struct * secondNew, int count)
    {
        quick_sort(waybill, 0, count - 1);

        firstNew[0] = waybill[0];
        secondNew[0] = waybill[1];
        int firstCounter = 1, secondCounter = 1;
        float firstSum = firstNew[0].price, secondSum = secondNew[0].price;
        for (int i = 2; i < count; i++)
        {
            if (firstSum < secondSum)
            {
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
