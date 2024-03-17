#include<stdio.h>
#include<string.h>
int main(void)
{
    int t,i,n;
    char a[110];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",a);
        n=strlen(a);
        if(n<=10)
        {
            printf("%s\n",a);
        }
        else
        {
            n=n-2;
            printf("%c%d%c\n",a[0],n,a[n+1]);
        }
    }
}
