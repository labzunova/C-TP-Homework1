#include <stdio.h>
#include "productStruct.h"

int countReading(){
    int count = 0;
    printf("\nEnter an amount of waybill positions: \n");
    while ((scanf("%d", &count) != 1)||(count <= 0)) {              //TODO: integer check
        printf("Enter a POSITIVE INTEGER amount of waybill positions: \n");
        while(getchar() != '\n'); // Чистим буфер
    };
    return count;
}

productStruct structReading(){
    struct productStruct* product;

    printf_s("Enter product vendor code: \n");
    while ((scanf("%d",&product->vendorCode) != 1)||(&product->vendorCode <= 0)){            //TODO: integer check
        printf_s(" !Enter a POSITIVE INTEGER product vendor code: \n");
        while(getchar() != '\n'); // Чистим буфер
    };

    printf_s("Enter amount of this product: \n");
    while ((scanf("%d",&product->amount) != 1)||(&product->amount < 0)){            //TODO: integer check
        printf_s(" !Enter a POSITIVE INTEGER number of products: \n");
        while(getchar() != '\n');
    };

    printf_s("Enter a price of this product: \n");
    while (scanf("%f",&product->price) != 1){            //TODO: integer check
        printf_s(" !Enter a correct product price: \n");
        while(getchar() != '\n');
    };

    printf_s("Enter a weight of this product: \n");
    while (scanf("%f",&product->weight) != 1){            //TODO: integer check
        printf_s(" !Enter a correct product weight: \n");
        while(getchar() != '\n');
    };

    return *product;
}

