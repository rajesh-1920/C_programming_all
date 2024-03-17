/*p-4.11*/
/*checking multiple or not*/

#include<stdio.h>
int main() /*start of main function*/
{
    int m,n; /*variable*/

    printf("m = "); /*prompt*/
    scanf("%d",&m); /*taking value*/
    printf("n = ");
    scanf("%d",&n);

    if(m%n==0) /*checking multiple or not*/
    {
        printf("m is a multiple of n\n"); /*showing result*/
    }
    else
    {
        printf("m is not a multiple of n\n"); /*showing result*/
    }

    return 0;
} /*end of main function*/
