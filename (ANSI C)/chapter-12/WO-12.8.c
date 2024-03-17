#include<stdio.h>
#include<math.h>
#define PI 3.1416
double y(double x)
{
    return 2*x*x-x+1;
}

double coss(double x)
{
    return cos((180.0/PI)*x);
}

double table(double (*f)(),double min,double max,double step)
{
    double a,value;
    for(a=min;a<=max;a+=step)
    {
        value=(*f)(a);
        printf("%5.2f  %10.4f\n",a,value);
    }
}

int main(void)
{
    printf("Table of y(x)=2*x*x-x+1\n");
    table( y,0.0,2.0,0.5);
    printf("\nTable of cos(x)\n");
    table( coss,0.0,PI,0.5);
}
