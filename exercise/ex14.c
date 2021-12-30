// Author: Md Sajib Hossain
/*
    Problem:
    Find the sum of x+x2/2+x3/3+…+x10/10,
    x is an integer which can be obtained by input.
*/

#include<stdio.h>
#include<math.h>

int main() {
    int x;
    float sum=0;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    for (int i=1; i<=10; i++) {
        sum += (pow((float)x, i))/(float)i;
    }
    printf("The sum of x+x2/2+x3/3+...+x10/10 is %.2f\n", sum);
    return 0;
}
