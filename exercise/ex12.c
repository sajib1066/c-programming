// Author: Md Sajib Hossain
/*
    problem:
    Find the sum of 1 + 2 + 3 +... + 100.
*/

#include<stdio.h>

int main() {
    int sum = 0;
    for(int i = 1; i <= 100; i++) {
        sum += i;
    }
    printf("The sum of 1 + 2 + 3 +... + 100 is %d\n", sum);
    return 0;
}
