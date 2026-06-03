/*Write a program to Find LCM of two numbers. */

#include <stdio.h>

int main(){
    int n1, n2, gcd;
    printf("Enter any two numbers :");
    scanf("%d%d", &n1,&n2);


    for(int i=1; i<=n1 && i<=n2; i++)
    {
      if(n1%i == 0 && n2%i==0)
      {
       gcd = i; 
      }  
    }
    printf("lcm of %d and %d is %d", n1,n2, (n1*n2)/gcd);
    return 0;
}