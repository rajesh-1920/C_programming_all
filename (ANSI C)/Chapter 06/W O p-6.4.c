/*worked out problem: 6.4*/
/*find largest number into three integers using nested if else*/

#include<stdio.h>

int main() /*main function start*/
{
    int a,b,c; /*variable*/

    printf("Enter the three integers:\n"); /*prompt*/
    scanf("%d%d%d",&a,&b,&c); /*taking value*/

    if(a>b)
    {
        if(a>c)
        {
            printf("Largest number is = %d\n",a); /*showing result*/
        }
        else
        {
            printf("Largest number is = %d\n",c); /*showing result*/
        }
    }
    else
    {
        if(c>b)
        {
            printf("Largest number is = %d\n",c); /*showing result*/
        }
        else
        {
            printf("Largest number is = %d\n",b); /*showing result*/
        }
    }

    return 0;
} /*end of main function*/
