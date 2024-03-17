#include<stdio.h>
int main(void)
{
    int x,y,*ptr;
    x=10;
    ptr=&x;
    y=*ptr;
    printf("value of x is %d\n",x);
    printf("%d is stored at %u\n",x,&x);
    printf("%d is stored at %u\n",*&x,&x);
    printf("%d is stored at %u\n",*ptr,ptr);
    printf("%d is stored at %u\n",ptr,&ptr);
    printf("%d is stored at %u\n",y,&y);
    *ptr=25;
    printf("Now x is %d\n",x);
}
