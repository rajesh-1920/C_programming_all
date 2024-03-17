/*p-79*/
/*simple interest calculation*/

#include<stdio.h>

int main()/*start of main function*/
{
    int x,i; /*variable*/

    printf("Enter the last value of x: "); /*prompt*/
    scanf("%d",&x); /*taking value of x*/

    printf("\nx\tx+2 \t x+4 \t x+d\n"); /*display design*/
    printf("--------------------------------\n"); /*display design*/

    for(i=1;i<=x;i=i+3)
    {
       printf("%d\t%d\t %d\t %d\n",i,i+2,i+4,i+6); /*display result*/
    }

    return 0;
}/*End of main function*/
