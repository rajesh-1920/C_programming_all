/*p-68*/
/*display 2^(0to10&0to-10)*/

#include<stdio.h>
int main() /*main function start*/
{
    double x,n,i,y,y1; /*variable*/

    printf("n\t2^n\t\t2^(-n)\n"); /*display*/
    printf("--------------------------------\n"); /*display*/

    for(n=0; n<=10; n++)
    {
        x=2;
        y=y1=1;

        if(n==0)
        {
            printf("%.lf\t%lf\t%lf\n",n,y,y1); /*showing result*/
        }
        else
        {
            for(i=1; i<=n; i++)
            {
                y=y*x; /*calculate x^n*/
            }
            for(i=1; i<=n; i++)
            {
                y1=y1*(1.0/x); /*calculate x^n*/
            }
            printf("%.lf\t%lf\t%lf\n",n,y,y1); /*showing result*/
        }
    }

    return 0;
}/*End of main function*/

