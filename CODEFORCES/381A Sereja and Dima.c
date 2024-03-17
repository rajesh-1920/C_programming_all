#include<stdio.h>
int main(void)
{
    int i,j,n,temp,ser,dim,t;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    ser=0;
    dim=0;
    t=1;
    i=0;
    j=n-1;
    while(1)
    {
        if(t%2!=0)
        {
            if(a[i]>=a[j])
            {
                ser=ser+a[i];
                i++;
                t++;
            }
            else
            {
                ser=ser+a[j];
                j--;
                t++;
            }
        }
        else
        {
            if(a[i]>=a[j])
            {
                dim=dim+a[i];
                i++;
                t++;
            }
            else
            {
                dim=dim+a[j];
                j--;
                t++;
            }
        }
        if(t==n+1)
        {
            break;
        }
    }
    printf("%d %d\n",ser,dim);
}
