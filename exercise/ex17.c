// Author: Md Sajib Hossain
/*
    problem:
    Input 10 numbers find out the maximum, minimum, average and output.
*/

#include<stdio.h>

int main() {
    int n[10], min, max, avg, sum = 0;
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &n[i]);
    }
    min = n[0];
    max = n[0];
    for (int i = 0; i < 10; i++) {
        if (n[i] < min) {
            min = n[i];
        }
        if (n[i] > max) {
            max = n[i];
        }
        sum += n[i];
    }
    avg = sum / 10;
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Average: %d\n", avg);
    return 0;
}