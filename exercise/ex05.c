// Author: Md Sajib Hossain
/*
Problem:
Decomposition of a positive integer into some prime factors.
For example, input 90, then output 90=2*3*3*5.
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int number;
    printf("Enter a positive integer number: ");
    scanf("%d", &number);
    printf("Prime factors of %d are: ", number);
    for (int i=2; i<number; i++) {
        while (number != i) {
            if (number % i == 0) {
                printf("%d * ", i);
                number /= i;
            } else {
                break;
            }
        }
    }
    printf("%d\n", number);
    printf("\n");
    return 0;
}