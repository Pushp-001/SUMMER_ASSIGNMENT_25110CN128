/*Write a program to Check strong number.*/

#include <stdio.h>

int main(){
    int number,rem;
    printf("Enter any number :");
    scanf("%d", &number);
    int a = number;
   
    int sum = 0;
    while(number>0)
    {
     rem = number % 10;
     int fact = 1;
     for(int i=1; i<=rem; i++)
     {
      fact = fact*i;
     }
     sum = sum + fact;
     
     number = number /10;
    }

    if(a == sum)
    {
    printf("Given number is a strong number.");
    }
    else{
    printf("Given number is not a strong number.");
    }

    return 0;
}