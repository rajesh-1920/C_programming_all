#include<stdio.h>
int main()
{
    int a,b,count=1;
    scanf("%d%d",&a,&b);
    while(1)
    {
        a=3*a;
        b=2*b;
        if(a>b)
        {
            break;
        }
    count++;
    }
    printf("%d\n",count);
    return 0;
}
