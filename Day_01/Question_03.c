/*Write a program to Find factorial of a number.*/

#include <stdio.h>

int main(){
     int number;
    printf("Enter any number :");
    scanf("%d", &number);
   
    int factorial =1;
    for(int i=1; i<=number; i++)
    { 
      factorial = factorial *i;
    }
    printf("Factorial of this number is :%d", factorial);
    return 0;
}