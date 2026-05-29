/*Write a program to Check whether a number is 
palindrome. */


#include <stdio.h>

int main(){
    int original_number;
    int digit,reversed_number =0;
    printf("Enter any number :");
    scanf("%d", &original_number);
    int b = original_number;

    while(original_number>0)
    {
     digit= original_number%10;
     reversed_number = reversed_number *10 + digit;
     
     original_number = original_number/10;
    }

    if(b== reversed_number)
    {
        printf("Given number is a palindrome");

    }
    else
    {
        printf("Given number is not a palindrome");
    }
    
    return 0;
}