/*p-4.21*/
/*checking a number will divided by another number or not*/

#include<stdio.h>
int main() /*start of main function*/
{
    double x,a,b,temp; /*variable*/

    printf("Enter the two numbers:\n"); /*prompt*/
    scanf("%lf%lf",&a,&b); /*taking value*/

    if(a<b) /*find large number*/
    {
        temp=a;
        a=b;
        b=temp;
    }

    if(b!=0)
    {
        x=a/b; /*calculate division*/
        printf("Division is possible\n");
        printf("Division = %.3lf\n",x); /*showing result*/
    }
    else
    {
        printf("Division not possible\n");
    }

    return 0;
}  /*end of main function*/
