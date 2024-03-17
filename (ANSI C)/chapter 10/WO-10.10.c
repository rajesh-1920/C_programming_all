#include<stdio.h>
void stat(void);
int main(void)
{
    int i;
    for(i=0;i<5;i++)
        stat();
}
void stat(void)
{
    static int x=0;
    x++;
    printf("x = %d\n",x);
}
