// Author: Md Sajib Hossain
/*
Problem:
Judge the prime numbers between 101 and 200 and output them.
*/

#include<stdio.h>

int main() {
    printf("Prime numbers between 101 and 200 are:\n");
    for (int i = 101; i <= 200; i++) {
        int flag = 0;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}
