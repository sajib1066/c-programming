// Author: Md Sajib Hossain
/*
    Problem:
    Find the sum of 1! + 2! + 3! +... + 20!.
    (Please define a function to calculator each of factorials)
*/

#include<stdio.h>

int fact(int n) {
    if (n==1 || n==0) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

int main() {
    long sum=0;
    for (int i=0; i<=20; i++) {
        sum += fact(i);
    }
    printf("The sum of 1! + 2! + 3! +... + 20! is %ld\n", sum);
    return 0;
}
