/*p-37*/
/*find the coordinates*/

#include<stdio.h>
int main()/*main function start*/
{
   int x=0, y=0; /*variable*/

   printf("Enter the value of x: "); /*prompt*/
   scanf("%d",&x); /*taking the x*/
   printf("Enter the value of y: "); /*prompt*/
   scanf("%d",&y); /*taking the y*/

   if(x>0 && y>0) /*condition for 1st coordinates*/
   {
       printf("Quadrant-I(+,+)\n"); /*showing result*/
   }
    else if(x<0 && y>0) /*condition for 2nd coordinates*/
   {
       printf("Quadrant-II(-,+)\n"); /*showing result*/
   }
    else if(x<0 && y<0) /*condition for 3rd coordinates*/
   {
       printf("Quadrant-III(-,-)\n"); /*showing result*/
   }
    else if(x>0 && y<0) /*condition for 4th coordinates*/
   {
       printf("Quadrant-IV(+,-)\n"); /*showing result*/
   }
      else /*except all it is 0,0 or on the axis*/
   {
       printf("It is origin or on the axis\n"); /*showing result*/
   }

   return 0;
}/*End of main function*/


