#include<stdio.h>
int main(void)
{
    long int s,n,i,j,t=0,c=0,temp;
    scanf("%ld%ld",&s,&n);
    long int x[n+1],y[n+1];
    y[0]=s;
    for(i=1; i<=n; i++)
    {
        scanf("%ld%ld",&x[i],&y[i]);
    }
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=n; i++)
        {
            if(x[i]>x[i+1])
            {
                temp=x[i];
                x[i]=x[i+1];
                x[i+1]=temp;
                temp=y[i];
                y[i]=y[i+1];
                y[i+1]=temp;
            }
            else if(x[i]==x[i+1]&&y[i]<y[i+1])
            {
                temp=x[i];
                x[i]=x[i+1];
                x[i+1]=temp;
                temp=y[i];
                y[i]=y[i+1];
                y[i+1]=temp;
            }
        }
    }
    for(i=1; i<=n; i++)
    {
        t=t+y[i-1];
        if(x[i]>=t)
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}
