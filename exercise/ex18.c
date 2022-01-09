// Author: Md Sajib Hossain
/*
    problem:
    Enter 10 numbers and output them in reverse order.
    For example, 12,23,34,33,17，then the output is:17,33,34,23,12
*/

#include<stdio.h>

int main() {
    int n[10];
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &n[i]);
    }
    printf("Reverse order: ");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", n[i]);
    }
    printf("\n");
    return 0;
}
