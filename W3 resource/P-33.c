/*p-33*/
/*find the highest value and position*/

#include<stdio.h>
int main()/*main function start*/
{
   int i, p=0, max=0, n[5]; /*variable*/

   for(i=0;i<5;i++) /*loop for taking value*/
   {
       printf("Enter your %dth number: ",i+1); /*prompt*/
       scanf("%d",&n[i]); /*taking the numbers*/
   } /*end for*/

    max=n[0]; /*consider the first as large number*/
    p=1;  /*first position*/

   for(i=0;i<5;i++) /*loop for checking*/
   {
       if(n[i]>max)
       {
           max=n[i]; /*swap the large number*/
           p=i+1; /*find position*/
       }
   }

   printf("Highest value: %d\n",max); /*print largest value*/
   printf("Position: %d\n",p); /*print position*/

   return 0;
}/*End of main function*/

