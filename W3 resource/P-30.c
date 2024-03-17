/*p-30*/
/*print square of even integers*/

#include<stdio.h>
int main()/*main function start*/
{
   int i, n=0; /*variable*/

   printf("Enter the last number: "); /*prompt*/
   scanf("%d",&n); /*get the last number*/

   printf("List of squqre of each one of the even values from 1 to %d:\n",n); /*display range*/

   for(i=2;i<=n;i=i+2)
   {
       printf("%d^2 = %d\n",i,i*i); /*display result*/
   }
   return 0;
}/*End of main function*/

