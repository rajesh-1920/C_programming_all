/*p-4.22*/
/*input 4 values and calculate the expression*/

#include<stdio.h>
int main() /*start of main function*/
{
    double a,b,c,d,x,y,z; /*variable*/

    printf("a = ");
    scanf("%lf",&a);
    printf("b = ");
    scanf("%lf",&b); /*prompt*/
    printf("c = ");  /*taking value*/
    scanf("%lf",&c);
    printf("d = ");
    scanf("%lf",&d);

    x=((a+b)*(c/d));
    y=((a+b)*c/d); /*calculate the expression*/
    z=(a+(b*c)/d);

    printf("(a+b)*(c/d) = %.3lf\n",x);
    printf("(a+b)*c/d = %.3lf\n",y); /*showing result*/
    printf("a+(b*c)/d = %.3lf\n",z);

    return 0;
} /*end of main function*/
