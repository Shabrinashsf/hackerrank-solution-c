/*This challenge will help you to learn how to take a character, a string and a sentence as input in C.
# Input Format
First, take a ch,  as input.
Then take the s,  as input.
Lastly, take the sen  as input.

# Constraints
s and sen will have fewer than 100 characters, including the newline.

# Output Format
Print three lines of output.
The first line prints the ch,
The second line prints the s.
The third line prints the sen.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch;
    char s[100];
    char sen[100];
    scanf("%c", &ch);          //mengambil input karakter
    getchar();                 //mengonsumsi newline setelah karakter pertama

    //mengambil input string
    scanf("%[^\n]%*c", &s);    //untuk membaca input sampai karakter newline ('\n') ditemukan. Ini berguna ketika Anda ingin membaca sebuah string atau kalimat yang mungkin mengandung spasi
    scanf("%[^\n]%*c", &sen);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);
    return 0;
}
