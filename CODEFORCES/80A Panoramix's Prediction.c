#include<stdio.h>
int main(void)
{
    int n,m,r=0,i,j,t;
    scanf("%d%d",&n,&m);
    if(n>=m||m%2==0)
    {
        r=1;
    }
    else if(n==2)
    {
        if(m==3)
        {
            r=0;
        }
        else
        {
            r=1;
        }
    }
    else
    {
        t=0;
        for(i=2; i<=m/2; i++)
        {
            if(m%i==0)
            {
                t=1;
                break;
            }
        }
        if(t==1)
        {
            r=1;
        }
        else
        {
            for(j=n+2; j<m; j=j+2)
            {
                t=0;
                for(i=2; i<=j/2; i++)
                {
                    if(j%i==0)
                    {
                        t=1;
                        break;
                    }
                }
                if(t==0)
                {
                    r=1;
                    break;
                }
            }
        }
    }
    if(r==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
