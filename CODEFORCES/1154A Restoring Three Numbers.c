#include<stdio.h>
int main(void)
{
    long long int x[4],a,b,c,i,j,temp;
    scanf("%lld%lld%lld%lld",&x[0],&x[1],&x[2],&x[3]);
    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            if(x[j]>x[j+1])
            {
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
    a=x[3]-x[0];
    b=x[3]-x[1];
    c=x[3]-x[2];
    printf("%lld %lld %lld\n",a,b,c);
}
