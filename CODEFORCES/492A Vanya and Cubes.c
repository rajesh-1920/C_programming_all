#include<stdio.h>
int main(void)
{
    int i,sum=0,c=(-1),s=0,n;
    scanf("%d",&n);
    for(i=1;n>=sum;i++)
    {
        s=s+i;
        sum=sum+s;
        c++;
    }
    printf("%d\n",c);
}
