// Author: Md Sajib Hossain
/*
    problem:
    A number, if it is exactly equal to the sum of its factors,
    is called a "perfect number". For example, 6 = 1 + 2 + 3,
    find out all the complete numbers within 1000.
*/

#include<stdio.h>

int main() {
    int sum;
    for(int i = 1; i <= 1000; i++){
        sum = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
                if (sum == i) {
                    printf("%d ", i);
                    break;
                }
            }
        }
    }
    printf("\n");
    return 0;
}