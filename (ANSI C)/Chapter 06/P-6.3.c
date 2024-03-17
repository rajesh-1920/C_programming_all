/*p-6.3*/
/*find the value of x from equation*/

#include<stdio.h>
int main() /*start of main function*/
{
    float a,b,c,d,m,n,x1,x2; /*variable*/

    printf("a = "); /*prompt*/
    scanf("%f",&a);
    printf("b = "); /*prompt*/
    scanf("%f",&b);
    printf("c = "); /*prompt*/
    scanf("%f",&c);
    printf("d = "); /*prompt*/
    scanf("%f",&d);
    printf("m = "); /*prompt*/
    scanf("%f",&m);
    printf("n = "); /*prompt*/
    scanf("%f",&n);

    if(((a*d)-(c*b))==0)
    {
        printf("There have no real value of x"); /*showing error*/
    }
    else
    {
        x1=(((m*d)-(b*n))/((a*d)-(c*b))); /*calculate x1*/
        x2=(((n*a)-(m*c))/((a*d)-(c*b))); /*calculate x2*/

        printf("\nx1 = %.3f\n",x1); /*showing value of x1*/
        printf("x2 = %.3f\n",x2); /*showing value of x1*/
    }

    return 0;
} /*end of main function*/

