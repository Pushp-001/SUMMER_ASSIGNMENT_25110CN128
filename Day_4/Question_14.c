/*Write a program to Find nth Fibonacci term*/
#include <stdio.h>

int main(){
    int a = 0;
    int b = 1;
    int sum =0;
    int n;
    printf("Enter the term you want :");
    scanf("%d", &n);
     
    if(n<=0)
    {
     printf("Please enter a positive number."); 

    }
    else{
        for(int i=1; i<=n; i++){
        sum = a+b;
        a=b;
        b=sum;

        
        
    }
    printf("%dth term of the fibonacci series is :%d", n,a);
    }
    

    return 0;
}