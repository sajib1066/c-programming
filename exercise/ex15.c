// Author: Md Sajib Hossain
/*
    Problem:
    There is a sequence: 2/1, 3/2, 5/3, 8/5, 13/8, 21/13...
    Find the sum of the first 20 entries in this sequence.
*/

#include<stdio.h>

int main() {
    float m1=2.0, n1=1.0, m2, n2;
    float sum = m1 / n1;
    for (int i=2; i<=20; i++) {
        m2 = m1 + n1;
        n2 = m1;
        sum += m2 /n2;
    }
    printf("The sum of the first 20 entries in the sequence is %f\n", sum);
    return 0;
}