#include<stdio.h>
void swap(int *p1,int *p2)
{
    int t;
    t=*p1;
    *p1=*p2;
    *p2=t;
}
int main(void)
{
    int x,y;
    x=0;
    y=20;
    printf("Before swapping : x = %d and y = %d\n",x,y);
    swap(&x,&y);
    printf("After swapping : x = %d and y = %d\n",x,y);
}
