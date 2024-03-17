#include<stdio.h>
int main()
{
    int x=0,n,i;
    char a[10];

    scanf("%d",&n);

    for(i=0; i<=n; i++)
    {
        gets(a);
        if(a[1]=='+')
        {
            ++x;
        }
        if(a[1]=='-')
        {
            --x;
        }
    }

    printf("%d\n",x);

    return 0;
}
