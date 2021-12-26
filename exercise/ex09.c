// Author: Md Sajib Hossain
/*
Problem:
Find the sum of s, s=a+aa+aaa+aaaa+aa…a, where a is a number,
for example: s = 2 + 22 + 222 + 2222, finally the s is 2468.
How many a will be added can be determined by input (n).
*/

#include<stdio.h>

int main() {
    int a, n;
    long s = 0;
    printf("Enter a and n: ");
    scanf("%d %d", &a, &n);
    int perm_a = a;  // store a permanently
    printf("Sum of ");
    for (int i=0; i<n; i++) {
        s += a;
        a = a  * 10 + perm_a;
        printf("%d %s", a, (i==n-1)?"":"+ ");
    }
    printf("is %ld\n", s);
    return 0;
}
