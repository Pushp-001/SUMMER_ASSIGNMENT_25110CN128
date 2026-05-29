// Write a program to Reverse a number. 

#include <stdio.h>

int main(){
    int digit;
    int number, reversed_number =0;
    
    printf("Enter any number :");
    scanf("%d", &number);

    while(number>0)
    {
     digit = number%10;
     reversed_number = reversed_number*10 + digit;
     number = number/10;  
    }

    printf("Reversed number is : %d", reversed_number);
    return 0;
}