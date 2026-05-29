// Write a program to Find product of digits. 

#include <stdio.h>

int main(){
    int number;
    printf("Enter any number :");
    scanf("%d", &number);

    int digit,product =1;
    while(number>0)
    {
      digit = number %10;
      product = product*digit;
      number = number/10;
    }
    printf("product of the digits is :%d", product);
    return 0;
}