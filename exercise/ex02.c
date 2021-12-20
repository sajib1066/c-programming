// Author: Md Sajib Hossain
/* Problem:
Input two numbers A and B., please output which is small and which is big
(Please use pointer and function to solve this question).
*/

#include<stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers A and B: ");
    scanf("%d %d", &a, &b);
    int *pa = &a, *pb = &b;
    if (*pa > *pb) {
        printf("%d is small and %d is big\n", *pb, *pa);
    } else if (*pa < *pb) {
        printf("%d is small and %d is big\n", *pa, *pb);
    } else {
        printf("%d is equal to %d\n", *pa, *pb);
    }
    return 0;
}
