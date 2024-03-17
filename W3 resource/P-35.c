/*p-35*/
/*find ascending order or descending order*/

#include<stdio.h>
int main()/*main function start*/
{
   int n1=0, n2=0; /*variable*/

   printf("Input a pair of numbers (for example 10,2 : 2,10):\n"); /*prompt*/
   printf("Enter the first number of the range: "); /*prompt*/
   scanf("%d",&n1); /*taking first value*/
   printf("Enter the last number of the range: "); /*prompt*/
   scanf("%d",&n2); /*taking last value*/

   if(n1>n2)
   {
          printf("The pair is in descending order!\n"); /*showing result*/
   }
   else if(n1<n2)
   {
          printf("The pair is in ascending order!\n"); /*showing result*/
   }
   else
   {
          printf("The numbers are equal!\n"); /*showing result*/
   }

    return 0;
}/*End of main function*/

