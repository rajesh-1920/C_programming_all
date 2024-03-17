/*p-6.2*/
/*find sum of the number divide by 7 from 100 to 200*/

#include<stdio.h>
int main() /*start of main function*/
{
    int i,sum=0; /*variable*/

    for(i=100;i<=200;i++) /*loop for number 100 to 200*/
    {
        if(i%7==0) /*divided by 7*/
        {
            printf("%d ",i); /*display the number*/
            sum=sum+i; /*find total*/
        }
    } /*end loop*/
    printf("\nSum = %d\n",sum); /*showing sum*/
    return 0;
} /*start of main function*/
