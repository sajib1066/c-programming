// Author: Md Sajib Hossain
/*
Problem:
Find the sum of s, s=a+aa+aaa+aaaa+aa…a, where a is a number,
for example: s = 2 + 22 + 222 + 2222, finally the s is 2468.
How many a will be added can be determined by input (n).
*/

#include<stdio.h>

int main() {
    unsigned long long n, a, s = 0;
    printf("Enter a and n: ");
    scanf("%llu %llu", &a, &n);
    unsigned long long perm_a = a;  // store a permanently
    printf("Sum of ");
    for (int i=0; i<n; i++) {
        printf("%llu %s", a, (i==n-1)?"":"+ ");
        s += a;
        a = (a * 10) + perm_a;
    }
    printf("is %llu\n", s);
    return 0;
}
