// Author: Md Sajib Hossain
/*
    problem:
    Input 10 numbers find out the maximum, minimum, average and output.
*/

#include<stdio.h>

int main() {
    int n[10], min, max, sum = 0;
    float avg;
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
    avg = sum / 10.0;
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Average: %f\n", avg);
    return 0;
}