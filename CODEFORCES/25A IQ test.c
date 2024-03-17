#include<stdio.h>
int main(void)
{
    int n,t,i;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[0]%2==0&&a[1]%2!=0&&a[2]%2!=0)
    {
        t=1;
    }
    else if(a[0]%2!=0&&a[1]%2==0&&a[2]%2==0)
    {
        t=1;
    }
    else
    {
        if(a[0]%2==0)
        {
            for(i=0; i<n; i++)
            {
                if(a[i]%2!=0)
                {
                    t=i+1;
                    break;
                }
            }
        }
        else
        {
            for(i=0; i<n; i++)
            {
                if(a[i]%2==0)
                {
                    t=i+1;
                    break;
                }
            }
        }
    }
    printf("%d\n",t);
}
