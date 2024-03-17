/*p-4.18*/
/*compute value of a equation*/

#include<stdio.h>
int main() /*start of main function*/
{
    double x,a,b,c; /*variable*/

    printf("a = ");
    scanf("%lf",&a);
    printf("b = "); /*prompt*/
    scanf("%lf",&b); /*taking value*/
    printf("c = ");
    scanf("%lf",&c);

    x=(a-(b/3.0)+(c*2.0)-1.0); /*compute value*/

    printf("x = %.3lf\n",x); /*showing result*/

    return 0;
}  /*end of main function*/
