/*Write a program to Check whether a number is
prime*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter any number :");
    scanf("%d", &n);
    int a=0;
    for(int i=2; i<=n-1; i++)
    {
    if(n%i== 0)
    {
      a = 1;   
      break;
    }
    
    }
    if(n==1)
    {printf("1 is neither prime nor composite");
    }
    else if(a==0)
    {
    printf("Given number is a prime number.");
    }
    else{
    printf("Given number is a composite number");
    }
    
    
    return 0;
}