// Author: Md Sajib Hossain
/*
Problem:
Judge the prime numbers between 101 and 200 and output them.
*/

#include<stdio.h>
#define START_NUMBER 101
#define END_NUMBER 200

int main() {
    printf("Prime numbers between %d and %d are:\n", START_NUMBER, END_NUMBER);
    for (int i = START_NUMBER; i <= END_NUMBER; i++) {
        int flag = 0;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("%d, ", i);
        }
    }
    printf("\n");
    return 0;
}
