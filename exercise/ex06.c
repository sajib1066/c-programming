// Author: Md Sajib Hossain
/*
    Problem:
    Enter the student's score, if the score >= 90, output the grade in A,
    60-89 in B and below 60 in C
*/

#include<stdio.h>

int main() {
    int score;
    printf("Enter the student's score: ");
    scanf("%d", &score);

    if(score >= 90)
        printf("Grade: A\n");
    else if(score <= 89 && score >= 60)
        printf("Grade: B\n");
    else
        printf("Grade: C\n");

    return 0;
}