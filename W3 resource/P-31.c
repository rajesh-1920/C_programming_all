/*p-31*/
/*checking odd even positive negative*/

#include<stdio.h>
int main()/*main function start*/
{
   int n=0; /*variable*/

   printf("Enter the number: "); /*prompt*/
   scanf("%d",&n); /*get the number*/

   if(n>0 && n%2==0) /*condition for positive & even*/
   {
       printf("Positive even\n"); /*showing result*/
   }
    else if(n<0 && n%2==0) /*condition for negative & even*/
   {
       printf("Negative even\n"); /*showing result*/
   }
    else if(n<0 && n%2!=0) /*condition for negative & odd*/
   {
       printf("Negative odd\n"); /*showing result*/
   }
    else if(n>0 && n%2!=0) /*condition for positive & odd*/
   {
       printf("Positive odd\n"); /*showing result*/
   }
      else /*except all it is 0*/
   {
       printf("even\n"); /*showing result*/
   }

   return 0;
}/*End of main function*/

