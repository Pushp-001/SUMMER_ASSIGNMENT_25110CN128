/*Write a program to Print multiplication table of 
a given number. */

#include <stdio.h>

int main(){
    int number;
    printf("Enter any number :");
    scanf("%d", &number);

    for(int i=1; i<=10; i++)
    {
     printf("%d X %d = %d\n", number , i, number*i) ;  
    }
    return 0;
}