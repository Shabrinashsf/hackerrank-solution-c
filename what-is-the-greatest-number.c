/*
Task:
Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them

Input Format:
Input will contain four integers a, b, c, d one on each line.
1
4
7
9

Output:
9
*/

#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d) {
    int max = a;  // Initialize max with the first argument

  // Compare and update max if b is greater than current max
    if (b > max){
        max = b;
    }
  
  // Compare and update max if c is greater than current max
    if (c > max){
        max = c;
    }

  // Compare and update max if d is greater than current max
    if (d > max){
        max = d;
    }
    return max;  // Return the maximum value found
}

int main() {
    int a, b, c, d;
    scanf("%d\n %d\n %d\n %d\n", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
