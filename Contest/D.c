#include<stdio.h>
#include<math.h>
int main()
{
    long long int i,j,t,n,x[109999],y[109999],xmax,ymax,xmin,ymin,r1,r2,f1,f2;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&n);
        for(j=1; j<=n; j++)
        {
            scanf("%lld%lld",&x[j],&y[j]);
        }
        xmax=abs(x[0]);
        ymax=abs(y[0]);
        xmin=x[0];
        ymin=y[0];
        for(j=1; j<=n; j++)
        {
            if(xmin>x[j])
            {
                xmin=x[j];
            }
            if(ymin>y[j])
            {
                ymin=y[j];
            }
            x[j]=abs(x[j]);
            y[j]=abs(y[j]);
            if(xmax<x[j])
            {
                xmax=x[j];
            }
            if(ymax<y[j])
            {
                ymax=y[j];
            }
        }
        r1=xmin;
        r2=ymin;
        if(xmin>0)
        {
            r1=(-1)*xmin;
        }
        if(ymin>0)
        {
            r2=(-1)*ymin;
        }
        f1=xmax-(r1);
        f2=ymax-(r2);
        if(f1>f2)
        {
            printf("%lld\n",(f1*f1));
        }
        else
        {
            printf("%lld\n",(f2*f2));
        }
    }


    return 0;
}
