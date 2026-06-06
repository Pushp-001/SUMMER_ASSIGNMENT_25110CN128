// Write a program to Check perfect number

#include <stdio.h>

int main(){
    
    int number, rem;
    int sum = 0;
    printf("Enter any number :");
    scanf("%d", &number);

    for(int i =1; i<=number-1; i++)
    
    {
     rem = number%i;

     if(rem == 0)
    {
     
     sum = sum+i;
        
    }

    }
    if(sum == number)
    {
        printf("Given number is a perfect number.");
    }
    else{
       printf("Given number is not a perfect number."); 
    }
    return 0;
}