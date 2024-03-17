/*p-4.14*/
/*calculate sin(x) and cos(x)*/

#include<stdio.h>
#include<math.h>
int main() /*start of main function*/
{
    double i,x,y,n; /*variable*/

    printf("x\tsin(x)\tcos(x)\n"); /*display*/

    for(i=0; i<=180; i=i+15)
    {
            n=(i*(M_PI/180));
            x=sin(n);   /*calculation*/
            y=cos(n);
            printf("%.2lf",i);
            printf("\t%.3lf",x);  /*showing result*/
            printf("\t%.3lf\n",y);
    }

    return 0;
} /*end of main function*/
