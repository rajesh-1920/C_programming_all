/*p-67*/
/*evaluate the equation y=x^n */

#include<stdio.h>
int main() /*main function start*/
{
    double x,n,i,y=1; /*variable*/

    printf("Enter the value of x and n:\n"); /*prompt*/
    scanf("%lf%lf",&x,&n); /*taking value*/

    if(n==0)
    {
        printf("y = %lf\n",y); /*showing result*/
    }
    else
    {
        for(i=1; i<=n; i++)
        {
            y=y*x; /*calculate x^n*/
        }
        printf("y = %lf",y); /*showing result*/
    }

    return 0;
}/*End of main function*/

