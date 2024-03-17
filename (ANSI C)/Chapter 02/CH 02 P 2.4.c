/*simple equation*/
#include<stdio.h>

int main() /*start of main function*/
{
    int a,b,c; /*variable*/
    a=250, b=85, c=25; /*value assign to variable*/
    float x=(float)a/(b-c); /*calculation*/
    printf("For a=%d,b=%d,c=%d value of x is %.2f\n",a,b,c,x); /*display result*/

    a=300, b=70, c=70; /*value assign to variable*/
    x=(float)a/(b-c); /*calculation*/
    printf("For a=%d,b=%d,c=%d value of x is %.2f\n",a,b,c,x); /*display result*/

    return 0;
} /*End of main function*/
