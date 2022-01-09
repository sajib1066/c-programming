// Author: Md Sajib Hossain
/*
    Problem:
    A ball falls freely from a height of 100 meters. After each landing,
    it bounces half of its original height and then falls.
    How many meters did it pass when it landed for the tenth time?
*/

#include<stdio.h>

int main() {
    float height = 100, hn = height / 2;
    for(int i = 2; i <= 10; i++) {
        height = height + 2 * hn;
        hn = hn / 2;
    }
    printf("The total of road is %f\n", height);
    printf("The tenth is %f meters\n", hn);
    return 0;
}