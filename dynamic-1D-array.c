KESALAHAN ==> PERCOBAAN PERTAMA
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    int sum = 0;
    int *arr = (int*)malloc(n * sizeof(int));
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    //outputnya:
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    printf("%d", sum);
    free(arr);
    return 0;
}

PERCOBAAN KEDUA
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    int sum = 0;
    
    //user input size dari array
    scanf("%d", &n);
    
    //alokasikan memori setelah value n diketahui
    int *arr = (int*)malloc(n * sizeof(int));
    
    //ngecek apakah alokasi memori berhasil
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;  // Keluar dari program jika gagal
    }
    
    //membaca input elemen array dari user
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    //mengitung sum of elements dari array arr
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    
    //cetak hasil sum
    printf("%d", sum);
    
    //bebaskan memori yang telah dialokasikan
    free(arr);
    
    return 0;
}

PERCOBAAN KETIGA - DENGAN MENAMBAHKAN BATASAN PADA INPUTAN N DAN ARR[I]
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    int sum = 0;
    
    //user input size dari array
    scanf("%d", &n);
    
    //ngecek apakan 1 <= n <= 1000
    if (n < 1 || n > 1000){
        printf("Nilai n harus diantara 1 dan 1000\n");
        return 1;
    }
    
    //alokasikan memori setelah value n diketahui
    int *arr = (int*)malloc(n * sizeof(int));
    
    //ngecek apakah alokasi memori berhasil
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;  // Keluar dari program jika gagal
    }
    
    //membaca input elemen array dari user
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        
        //ngecek tiap elemen dari array arr
        if (arr[i] < 1 || arr[i] > 1000){
            printf("Setiap elemen harus antara 1 dan 1000\n");
            return 1;
        }
    }
    
    
    //mengitung sum of elements dari array arr
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    
    //cetak hasil sum
    printf("%d", sum);
    
    //bebaskan memori yang telah dialokasikan
    free(arr);
    
    return 0;
}
