/*worked out problem: 6.3*/
/*calculate e^x equation to n number*/

#include<stdio.h>

#define ACCURACY 0.0001
int main() /*main function start*/
{
   int n=1,count=1;
   float x=1,term=1,sum=1; /*variable*/

   printf("Enter the value of x: "); /*prompt*/
   scanf("%f",&x); /*taking x*/

   while(n<=100)
   {
       term=term*(x/n);
       sum=sum+term; /*calculate total*/
       count++;
       if(term<ACCURACY)
       {
           n=999;
       }
       else
       {
           n++;
       }
   }

   printf("terms = %d \nsum = %f\n",count,sum); /*showing result*/

    return 0;
} /*end of main function*/

