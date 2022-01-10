// Author: Md Sajib Hossain
/*
    problem:
    Input a number m, and then print out all prime numbers
    which are less than m (Please use pointer and function to solve this question).
*/

#include<stdio.h>

void get_prime(int m) {
    // Get the prime numbers less than m
    int i, j, *prime;
    for (i = 2; i < m; i++) {
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                break;
            }
        }
        if (i == j) {
            prime = &i;
            printf("%d ", *prime);
        }
    }
}

int main() {
    int m, i, j, k;
    printf("Enter a number: ");
    scanf("%d", &m);
    printf("Prime numbers less than %d are: ", m);
    get_prime(m);
    printf("\n");
    return 0;
}