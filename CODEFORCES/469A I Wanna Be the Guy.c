#include<stdio.h>
int main()
{
    int n,p,q,a[210],i,x=0,y,j;
    scanf("%d%d",&n,&p);
    for(i=0; i<p; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&q);
    for(i=p; i<q+p; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<p+q; i++)
    {
        for(j=i+1; j<p+q; j++)
        {
            if(a[i]>a[j])
            {
                a[i]=a[j]+a[i];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }
    for(i=0; i<p+q; i++)
    {
        if(a[i]!=a[i+1])
        {
            x=x+a[i];
        }
    }
    y=(n*(n+1)/2);
    if(x==y)
    {
        printf("I become the guy.\n");
    }
    else
    {
        printf("Oh, my keyboard!\n");
    }
    return 0;
}
