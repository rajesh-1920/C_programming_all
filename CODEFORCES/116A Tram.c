#include<stdio.h>
int main(void)
{
    int n,i,f=0,r;
    scanf("%d",&n);
    int a[n],b[n],suma=0,sumb=0;
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0; i<n; i++)
    {
        suma=suma+a[i];
        sumb=sumb+b[i];
        r=sumb-suma;
        if(f<r)
        {
           f=r;
        }
    }
        printf("%d\n",f);
}
