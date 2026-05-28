/* Write a program to Calculate sum of first N 
natural numbers. */

#include <stdio.h>

int main(){
    int number;
    printf("Enter any number :");
    scanf("%d", &number);

    int sum= 0;
    for(int i= 1; i<=number; i++)
    {
     sum = sum+ i;   
    }
    printf("Sum upto this natural number is :%d", sum);
    return 0;
}