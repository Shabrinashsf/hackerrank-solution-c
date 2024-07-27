/* 
Task:
1. Declare 4 variables: two of type int and two of type float.
2. Read 2 lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your  variables.
3. Use the + and - operator to perform the following operations:
4. Print the sum and difference of two int variable on a new line.
5. Print the sum and difference of two float variable rounded to one decimal place on a new line.

Constraints
1 <= integer variables <= 10000
1 <= float variables <= 10000 

Input:
10 4
4.0 2.0

Output:
14 6
6.0 2.0
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int add1(int, int);
int sub1(int, int);
float add2(float, float);
float sub2(float, float);
int main()
{
	
    int num1, num2;
    float num3, num4;
    int sum1, min1;
    float sum2, min2;
    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &num3, &num4);
    sum1 = add1(num1, num2);
    sum2 = add2(num3, num4);
    min1 = sub1(num1, num2);
    min2 = sub2(num3, num4);
    
    if(num1 && num2 && num3 && num4 >= 1){
        printf("%d %d\n", sum1, min1);
        printf("%.1f %.1f", sum2, min2);
    }
    else if (num1 && num2 && num3 && num4 <= 10000){
        printf("%d %d\n", sum1, min1);
        printf("%.1f %.1f", sum2, min2);
    }
    else {
        printf("Please input the number that >= 1 and <= 10000");
    }

    return 0;
}

int add1 (int a, int b){
    return (a + b);
}
int sub1 (int a, int b){
    return (a - b);
}
float add2 (float a, float b){
    return (a + b);
}
float sub2 (float a, float b){
    return (a - b);
}
