/*write a program to print armstrong numbers in a range*/

#include <stdio.h>
#include <math.h>

int main(){
    int start,end,num;
   
    printf("Enter starting number and ending number of the range :");
    
    scanf("%d%d", &start,&end);
    int r;

    for(num=start; num<=end; num++)
    {  
     int b =num;
     int c= num;
     int d= num;
     int count =0;
     int arm =0;
     while(d>0)
     {
       d= d/10;
       count++;
     }
     while(b>0)
     {
      r = b %10;
      arm  = round(pow(r,count))+arm;
      b = b/10;
     }
     if(arm==c)
     {
      printf(" %d " , num);
     }
    }




 


   return 0;
}