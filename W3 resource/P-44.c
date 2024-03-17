/*p-44*/
/*calculate the average number*/

#include<stdio.h>
int main() /*main function start*/
{
    float n=0,ave=0,total=0,counter=0; /*variable*/

    printf("Input the mathematics marks(input 0 or any negative number to terminate):\n"); /*prompt*/

    while(1) /*for line*/
    {
       scanf("%f",&n); /*taking number of mathematics*/

       if(n<=0)
       {
           break; /*terminate of the loop*/
       }
       total=total+n; /*calculate the total number*/
       counter++; /*count total number of student*/
    }

    ave=total/counter; /*calculate average*/
    printf("Average marks in Mathematics: %.2f\n",ave); /*showing result*/

   return 0;
}/*End of main function*/
