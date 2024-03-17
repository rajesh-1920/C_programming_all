/*worked out problem: 6.1*/
/*calculate ratio*/

#include<stdio.h>

int main() /*main function start*/
{
    int a,b,c,d; /*variable*/
    float ratio;

    printf("Enter four integers:\n"); /*prompt*/
    scanf("%d%d%d%d",&a,&b,&c,&d); /*taking value*/

    if(c-d!=0) /*check condition*/
    {
      ratio=(float)(a+b)/(c-d); /*calculate ratio*/
      printf("Ratio = %f\n",ratio); /*showing ratio*/
    }
    return 0;
} /*end of main function*/
