/*worked out problem: 6.6*/
/*print the name of month*/

#include<stdio.h>

int main() /*main function start*/
{
    int n;
    char *month[]={"January","February","March","April","May","June","July","August","September","October","November","December","January"}; /**name of month*/

    printf("Enter the month value: "); /*prompt*/
    scanf("%d",&n); /*taking month value*/

    if(n<1 || n>12)
    {
        printf("Error !! Invalid value. press any key to terminate.."); /*showing error*/
    }
    else
    {
        printf("The month is %s \nThe next month is %s \n",month[n-1],month[n]); /*showing value*/
    }

    return 0;
} /*end of main function*/
