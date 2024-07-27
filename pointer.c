#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) { 
    int sum = *a + *b;  //menghitung jumlah a + b
    int abs_diff = abs( *a - *b);  //menghitung nilai mutlak dari a - b
    *a = sum;  //memperbaharui nilai a menjadi hasil dari a + b
    *b = abs_diff;  //memperbaharui nilai b menjadi hasil dari nilai mutlak a - b
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);  //membaca nilai input a dan b
    update(pa, pb);  //memanggil fungsi update
    printf("%d\n%d", a, b);  //print nilai a dan b yang sudah diperbaharui

    return 0;
}
