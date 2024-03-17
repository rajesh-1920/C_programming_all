#include<stdio.h>
int main(void)
{
    long int n,l,i,t=0,j;
    scanf("%ld",&n);
    long int a[n],b[n];
    float m,k;
    for(i=0; i<n; i++)
    {
        scanf("%ld%ld",&a[i],&b[i]);
    }
    for(j=0; j<n-1; j++)
    {
        k=(float)a[j]/b[j];
        m=(float)a[j+1]/b[j+1];
        if(m!=k)
        {
            t=1;
            break;
        }
    }
    if(t==1)
    {
        printf("Happy Alex\n");
    }
    else
    {
        printf("Poor Alex\n");
    }
}
