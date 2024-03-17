/*p-21*/
/*check range */

#include<stdio.h>
int main() /*main function start*/
{
    int a=0; /*variable*/

    printf("Input an integer: "); /*prompt*/
    scanf("%d",&a); /*taking the integer*/

    if(a>=0&&a<=20) /*check condition*/
    {
        printf("The integer range is [0,20]\n"); /*showing range*/
    }
    else if(a>20&&a<=40) /*check condition*/
    {
        printf("The integer range is [21,40]\n"); /*showing range*/
    }
    else if(a>40&&a<=60) /*check condition*/
    {
        printf("The integer range is [41,60]\n"); /*showing range*/
    }
    else if(a>60&&a<=80) /*check condition*/
    {
        printf("The integer range is [61,80]\n"); /*showing range*/
    }
    else
    {
      printf("Out of range"); /*error message*/
    }

    return 0;
}/*End of main function*/

