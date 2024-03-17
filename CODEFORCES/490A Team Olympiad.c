#include<stdio.h>
int main(void)
{
    int n,i,t1=0,t2=0,t3=0;
    scanf("%d",&n);
    int t[n],w,j,k;
    for(i=0; i<n; i++)
    {
        scanf("%d",&t[i]);
        if(t[i]==1)
        {
            t1++;
        }
        else if(t[i]==2)
        {
            t2++;
        }
        else
        {
            t3++;
        }
    }
    if(t1<=t2&&t1<=t3)
    {
        w=t1;
    }
    else if(t2<=t1&&t2<=t3)
    {
        w=t2;
    }
    else if(t3<=t1&&t3<=t2)
    {
        w=t3;
    }
    printf("%d\n",w);
    for(i=0; i<w; i++)
    {
        k=1;
        while(1)
        {
            for(j=0; j<n; j++)
            {
                if(t[j]==k)
                {
                    printf("%d ",j+1);
                    t[j]=0;
                    k++;
                }
            }
            if(k>3)
            {
                break;
            }
        }
        printf("\n");
    }
}
