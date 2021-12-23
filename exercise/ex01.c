// Author: Md Sajib Hossain
// Problem: Enter two numbers A and B. Please exchange their values and output them.

#include<stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two numbers A and B: ");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After exchange: A = %d, B = %d\n", a, b);
    return 0;
}
