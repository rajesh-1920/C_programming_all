#include<stdio.h>
int main(void)
{
    int n,a[3],i,j,k,temp,r;
    scanf("%d%d%d%d",&n,&a[0],&a[1],&a[2]);
    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    r=0;
    for(i=0; i<=100; i++)
    {
        for(j=0; j<=n; j++)
        {
            for(k=0; k<=n; k++)
            {
                if(((i*a[2])+(j*a[1])+(k*a[0]))==n)
                {
                    if(i+j+k>r)
                    {
                        r=i+j+k;
                    }
                }
            }
        }
    }
    printf("%d\n",r);
}
