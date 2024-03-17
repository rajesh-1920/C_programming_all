#include<stdio.h>
int main(void)
{
    int n,i,t=0,j;
    scanf("%d",&n);
    int a[n],h[n];
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&h[i],&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(h[i]==a[j]){t++;}
        }
    }
    printf("%d\n",t);
}
