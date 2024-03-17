/*p-6.9(a)*/
/*find the value of a function using nested if statements*/

#include<stdio.h>
int main() /*start of main function*/
{
    int x; /*variable*/

    printf("Enter the value of x: "); /*prompt*/
    scanf("%d",&x); /*taking the value of x*/

    if(x>=0)
    {
        if(x==0)
        {
            printf("y = 0\n"); /*showing result*/
        }
        else
        {
            printf("y = 1\n"); /*showing result*/
        }
    }
    else
    {
        printf("y = -1\n"); /*showing result*/
    }

    return 0;
} /*end of main function*/
