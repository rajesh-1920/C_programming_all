#include<stdio.h>
int main(void)
{
    int x,y;
    double power(int,int);
    printf("Enter x,y\n");
    scanf("%d%d",&x,&y);
    printf("%d to the power %d is = %lf\n",x,y,power(x,y));
}
double power(int a,int b)
{
    double p=1.0;
    if(b>=0)
    {
        while(b--)
            p*=(double)a;
    }
    else
    {
        b=-b;
        while(b--)
            p/=(double)a;
    }
    return p;
}
