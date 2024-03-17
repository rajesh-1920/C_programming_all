/*p-32*/
/*number divided by a specified number and has 3 reminder from 1 to 100*/

#include<stdio.h>
int main()/*main function start*/
{
   int i, n=0; /*variable*/

   printf("Enter the specified number: "); /*prompt*/
   scanf("%d",&n); /*getting the specified number*/

   for(i=1;i<=100;i++)
   {
       if(i%n==3) /*condition for reminder 3*/
       {
           printf("%d\n",i); /*display result*/
       } /*end if*/
   } /*end for*/

    return 0;
}/*End of main function*/

