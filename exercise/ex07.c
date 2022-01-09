// Author: Md Sajib Hossain
/*
    Problem:
    Input two positive integers m and n to find the greatest common divisor.
*/

#include<stdio.h>

int main() {
    int m, n, temp, a, b, c;
    printf("Enter two positive integers: ");
    scanf("%d %d", &m, &n);
    if(m > n) {
        temp = n;
        n = m;
        m = temp;
    }
    a = m, b = n;
    while(b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    printf("The greatest common divisor is %d\n", a); 
    return 0;
}