/*find minimum steps*/
#include<stdio.h>
int main()
{
    int x,s1=0,s2=0,s3=0,s4=0,s5=0,t=0;
    scanf("%d",&x);

    s5=x/5;
    x=x%5;
    s4=x/4;
    x=x%4;
    s3=x/3;
    x=x%3;
    s2=x/2;
    x=x%2;
    s1=x;

    t=s1+s2+s3+s4+s5;
    printf("%d\n",t);
    return 0;
}
