#include<stdio.h>
int main(void)
{
    int i,t,n,mi=0,ci=0;
    scanf("%d",&n);
    int m[n],c[n];
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&m[i],&c[i]);
        if(m[i]>c[i])
        {
            mi++;
        }
        if(m[i]<c[i])
        {
            ci++;
        }
    }
    if(mi>ci)
    {
        printf("Mishka\n");
    }
    if(mi<ci)
    {
        printf("Chris\n");
    }
    if(mi==ci)
    {
        printf("Friendship is magic!^^\n");
    }
}
