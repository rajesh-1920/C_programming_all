/*p-34*/
/*get sum of odd number in a range*/

#include<stdio.h>
int main()/*main function start*/
{
   int i, sum=0, temp=0, n1=0, n2=0; /*variable*/

   printf("Enter the first number of the range: "); /*prompt*/
   scanf("%d",&n1); /*taking first value*/
   printf("Enter the last number of the range: "); /*prompt*/
   scanf("%d",&n2); /*taking last value*/

   if(n1>n2) /*to get small number*/
   {
       temp=n1;
       n1=n2;
       n2=temp;
   }
   printf("List of odd numbers:\n"); /*prompt*/

   for(i=n1;i<=n2;i++)
   {
       if(i%2!=0) /*condition for odd number*/
       {
           printf("%d\n",i); /*showing odd numbers*/
           sum=sum+i; /*calculate sum*/
       }
   }

   printf("Sum=%d\n",sum); /*display result*/

   return 0;
}/*End of main function*/

