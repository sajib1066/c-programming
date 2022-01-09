// Author: Md Sajib Hossain
/*
    problem:
    Enter 10 numbers, define the sort function to sort them in descending order
    and then output them.
*/

#include<stdio.h>

int main() {
    int n[10];
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < 10; i++) {
        for (int j = i+1; j < 10; j++) {
            if (n[i] < n[j]) {
                int temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }
    printf("Descending order: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", n[i]);
    }
    printf("\n");
    return 0;
}