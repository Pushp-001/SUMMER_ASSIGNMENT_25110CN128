/*Write a program to Generate Fibonacci series*/              


#include <stdio.h>

int main(){
    int a = 0;
    int b = 1;
    int sum = 0;
    int n;
    
    printf("Enter the number of terms you want: ");
    scanf("%d", &n);
     
    if(n <= 0) {
        printf("Please enter a positive number."); 
    }
    
    else {
        for(int i = 1; i <= n; i++){
           printf(" %d ", a);
            sum = a + b;
            a= b;
            b= sum;
            
        }
       
    }
    
    return 0;
}
