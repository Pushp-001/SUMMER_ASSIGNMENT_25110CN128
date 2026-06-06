/*Write a program to Find largest prime factor*/


#include <stdio.h>

int main() {
 int number;
 printf("Enter any number: ");
 scanf("%d", &number);

 int largest_prime_factor = -1;

 for (int i = 2; i <= number; i++) {
  if (number % i == 0) {  

  int prime = 1;
 for (int j = 2; j * j <= i; j++) {
  if (i % j == 0) {      
  prime = 0;
    break;
       }
    }
    if (prime) {
       largest_prime_factor = i;
  }    }
 }

    printf("Largest prime factor of the given number is %d\n",
           largest_prime_factor);

    return 0;
}