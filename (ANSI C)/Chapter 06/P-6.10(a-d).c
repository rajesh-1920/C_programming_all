/*p-6.10(a-d)*/
/*find the value of x1,x2 from the equation*/

#include<stdio.h>
#include<math.h>
int main() /*start of main function*/
{
    double x1,x2,a,b,c,d; /*variable*/

    printf("Enter the value of a: "); /*prompt*/
    scanf("%lf",&a); /*taking the value of a*/
    printf("Enter the value of b: "); /*prompt*/
    scanf("%lf",&b); /*taking the value of b*/
    printf("Enter the value of c: "); /*prompt*/
    scanf("%lf",&c); /*taking the value of c*/

    d=(b*b)-4.0*a*c;

    if(a==0 && b==0)
    {
        printf("there have no solution.\n"); /*display result*/
    }
    else if(a==0)
    {
        x1=(-c)/b; /*calculate the value*/
        printf("There have only one value.\nThe value is = %.3lf\n",x1); /*showing result*/
    }
    else if(d<0)
    {
        printf("There have no real value of x.\n"); /*display result*/
    }
    else
    {
        x1=(((-b)+((sqrt(d)))/2.0*a)); /*calculate x1*/
        x2=(((-b)-((sqrt(d)))/2.0*a)); /*calculate x2*/
        printf("x1 = %.3lf\n",x1); /*showing x1*/
        printf("x2 = %.3lf\n",x2); /*showing x2*/
    }

    return 0;
} /*end of main function*/
