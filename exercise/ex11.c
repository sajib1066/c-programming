// Author: Md Sajib Hossain
/*
    Problem:
    A ball falls freely from a height of 100 meters. After each landing,
    it bounces half of its original height and then falls.
    How many meters did it pass when it landed for the tenth time?
*/

#include<stdio.h>

int main() {
    int height = 100;
    for(int i = 1; i <= 10; i++) {
        height = height / 2;
        printf("%d\n", height);
    }
    return 0;
}