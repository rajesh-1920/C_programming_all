#include<stdio.h>
int main(void)
{
    long long int i,t,n,j,mina,minb,da,db;
    scanf("%lld",&t);
    for(i=0; i<t; i++)
    {
        mina=minb=100000000000;
        scanf("%lld",&n);
        long long int a[n],b[n],R,r1,r2;
        for(j=0; j<n; j++)
        {
            scanf("%lld",&a[j]);
            if(mina>a[j])
            {
                mina=a[j];
            }
        }
        for(j=0; j<n; j++)
        {
            scanf("%lld",&b[j]);
            if(minb>b[j])
            {
                minb=b[j];
            }
        }
        r1=r2=R=0;
        for(j=0; j<n; j++)
        {
            da=(a[j]-mina);
            db=(b[j]-minb);
            if(da>=0&&db>=0&&db>da)
            {
                R=R+da;
                a[j]=a[j]-da;
                b[j]=b[j]-da;
            }
            if(da>=0&&db>=0&&db<=da)
            {
                R=R+db;
                a[j]=a[j]-db;
                b[j]=b[j]-db;
            }
            r1=r1+(a[j]-mina);
            r2=r2+(b[j]-minb);
        }
        R=R+r1+r2;
        printf("%lld\n",R);
    }
}
