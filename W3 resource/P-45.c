/*p-45*/
/*calculate some of a series*/

#include<stdio.h>
int main() /*main function start*/
{
    float i,n=0,sum=0; /*variable*/
    printf("Input the value of the divider of last elements of the series:  "); /*prompt*/
    scanf("%f",&n); /*taking last divider value*/

    for(i=1;i<=n;i++)
    {
        sum=sum+(1/i); /*calculate the sum*/
    }
    printf("Value of S=%.3f\n",sum); /*showing result*/

   return 0;
}/*End of main function*/

