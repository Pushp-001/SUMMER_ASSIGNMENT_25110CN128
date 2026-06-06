/*Write a program to check armstrong number*/
#include <stdio.h>
#include <math.h>

int main(){
    int number;
    int arm =0;
    printf("Enter any number :");
    scanf("%d", &number);
    int c, r, d;
    c = number;
    d = number;
    int count =0;

    while(number>0)
    { 
        number = number/10;
        count++;

    }
    
    
    while(c>0)
      {
        r = c %10;

        arm = round(pow(r,count))+ arm;
        c = c/10;
        
      }  

      if(arm == d)
      {
        printf("Given number is an armstrong number");
      }
      else 
      {
        printf("Given number is not an armstrong number");
      }
    
    return 0;
}