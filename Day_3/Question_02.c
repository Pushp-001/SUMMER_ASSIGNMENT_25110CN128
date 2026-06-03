/*Write a program to Print prime numbers in a
range.*/

#include <stdio.h>

int main(){
    int start, end, temp,i,j ;
    printf("Enter Start and end value :");
    scanf("%d%d", &start, &end);

    if(start>end)
    {
     temp = start;
     start = end;
     end = temp;
    }
    printf("prime numbers in range of %d and %d are: ",start,end);
     
     
    for( i = start; i<=end; i++)
    { 
    int prime =0;
     
     for ( j =2; j<=i-1;j++)
     {
     if(i%j ==0)
     {
       prime = 1; 
       break;
     }
    } 
    if(prime==0)
     {
     printf(" %d ",i);
    } 
    } 
     
    
    return 0;
}