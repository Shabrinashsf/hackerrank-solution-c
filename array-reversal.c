PERCOBAAN PERTAMA - JALAN DI ONLINEGDB - TIDAK DITERIMA DI HACCERRANK
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;
    scanf("%d", &num);
    
    //ngecek batasan num, 1 <= num <= 1000
    if (num < 1 || num > 1000){
        printf("Masukkan angka sesuai batasan!");
        return 1;
    }
    
    int *arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
        
        //ngecek batasan array arr
        if (arr[i] < 1 || arr[i] > 1000){
            printf("Masukkan elemen sesui batasan!");
            return 1;
        }
    }

    //Write the logic to reverse the array.
    for (i = num - 1; i >= 0; i--){
        printf("%d", arr[i]);
    }

    return 0;
}

PERCOBAAN KEDUA - DITERIMA DI HACCERANK
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    
    //ngecek batasan num, 1 <= num <= 1000
    if (num < 1 || num > 1000){
        printf("Masukkan angka sesuai batasan!");
        return 1;
    }
    
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
        
        //ngecek batasan array arr
        if (arr[i] < 1 || arr[i] > 1000){
            printf("Masukkan elemen sesui batasan!");
            return 1;
        }
    }

    /* Write the logic to reverse the array. */

    for(i = num - 1; i >= 0; i--)
        printf("%d ", *(arr + i));
    return 0;
}
