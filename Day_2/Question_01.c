/*Write a program to Find sum of digits of a 
number. */

#include <stdio.h>

int main(){
    int number;
    printf("Enter any number :");
    scanf("%d", &number);

    int digit,sum =0;
    while(number>0)
    {
      digit = number %10;
      sum = sum +digit;
      number = number/10;
    }
    printf("Sum of the digits is :%d", sum);
    return 0;
}