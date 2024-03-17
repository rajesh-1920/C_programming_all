#include<stdio.h>
int main(void)
{
    long int i,N,M,j;
    scanf("%ld%ld",&N,&M);
    long int a[N],r[M],t[M];
    for(i=0; i<N; i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0; i<M; i++)
    {
        t[i]=i+1;
        r[i]=0;
    }
    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            if(a[i]==t[j])
            {
                r[j]++;
                break;
            }
        }
    }
    for(i=0; i<M; i++)
    {
        printf("%ld\n",r[i]);
    }
}
