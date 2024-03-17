#include<stdio.h>
int main()
{
    int n,i,max,j,temp,sum_m,sum_t,k;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0; j<n; j++)
    {
        max=a[j];
        for(i=0; i<n; i++)
        {
            if(max>a[i])
            {
                temp=max;
                max=a[i];
                a[i]=temp;
            }
        }
        a[j]=max;
    }
    for(i=0; i<n; i++)
    {
        sum_m=0;
        sum_t=0;
        for(k=0;k<=i;k++)
        {
            sum_m=sum_m + a[k];
        }
        for(j=i+1;j<n;j++)
        {
            sum_t=sum_t + a[j];
        }
        if(sum_m > sum_t)
        {
            printf("%d\n",i+1);
            break;
        }
    }
    return 0;
}
