#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, rem, result = 0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    if(n >= 10000 && n <= 99999){  //cek apakah bilangan yang diinput adalah bilangan lima digit
        while(n != 0){  
            rem = n % 10;  //untuk mendapatkan/ menyimpan digit" pada bilangan yang diinput
            n = n / 10;  //untuk memperbaharui bilangan n, sehingga digit yang diambil oleh rem tidak lagi dioperasi
            result = result*1 + rem;  //untuk menyimpan hasil penjumlahan semua digit dr bilangan lima digit
        }
        printf("%d", result);  //jika n = 0, maka akan di print hasil penjumlahan digit"nya
    } else {
        printf("Input bukan bilangan lima digit");
    }

    
    return 0;
}
