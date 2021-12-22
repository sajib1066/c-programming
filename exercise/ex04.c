// Author: Md Sajib Hossain
/*
Problem:
Print all "Narcissus Numbers". The so-called "Narcissus Number"
refers to a three-digit number whose sum of each digital cube is equal to
that number. For example, 153=1^3+5^3+3^3，so 153 is a "Narcissus Number".
*/

#include<stdio.h>
#include<math.h>

int main() {
    int number, original_number, reminder, sum=0, digit=0;
    printf("Please Enter a three-digit number: ");
    scanf("%d", &number);
    original_number = number;

    while(number != 0) {
        digit++;
        number = number / 10;
    }
    number = original_number;
    while(number != 0) {
        reminder = number % 10;
        sum = sum + pow(reminder, digit);
        number = number / 10;
    }
    if (sum == original_number) {
        printf("%d is a Narcissus Number\n", original_number);
    } else {
        printf("%d is not a Narcissus Number\n", original_number);
    }
    return 0;
}
