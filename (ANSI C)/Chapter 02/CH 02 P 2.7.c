#include<stdio.h>
int add(int x,int y);
int sub(int m, int n);
int main()
{
    int a=20,b=10,sum=0,diff=0;
    sum=add(a,b);
    diff=sub(a,b);
    printf("%d+%d=%d\n",a,b,sum);
    printf("%d-%d=%d",a,b,diff);
    return 0;
}

int add(x,y)
{
    int s=x+y;
    return s;
}

int sub(x,y)
{
    int d=x-y;
    return d;
}
