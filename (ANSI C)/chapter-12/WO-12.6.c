#include<stdio.h>
void exchange(int *p1,int *p2)
{
    int t;
    t=*p1;
    *p1=*p2;
    *p2=t;
}
int main(void)
{
    int x,y;
    x=100;
    y=200;
    printf("Before exchange : x = %d and y = %d\n",x,y);
    exchange(&x,&y);
    printf("After exchange : x = %d and y = %d\n",x,y);
}
