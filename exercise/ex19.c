// Author: Md Sajib Hossain
/*
    problem:
    Verification: An even number can always be expressed as the sum of
    two prime numbers.
*/

#include<stdio.h>

int main() {
    int n, d;
    printf("Enter an even number: ");
    scanf("%d", &n);
    for(int i=3; i<n/2; i+=2) {
        for(int j=2; j<=i-1; j++) {
            if(i % j == 0) {
                break;
            }
            if(j > i - 1) {
                d = n - i;
            }
            else {
                break;
            }

            for (int j=2; j<=d-1; j++) {
                if(d % j == 0) {
                    break;
                }
                if(j > d - 1) {
                    printf("%d = %d + %d\n", n, i, d);
                }
            }
        }
    }
    return 0;
}