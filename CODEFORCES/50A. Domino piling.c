/*fill up m*n rectangle by 2*1 domino*/

#include<stdio.h>
int main()
{
    int M=0,N=0,t=0,m;
    scanf("%d%d",&M,&N);

    if(N%2==0)
    {
        t=M*N/2;
    }
    else
    {
        N=N-(N%2);
        t=M*N/2;
        m=M/2;
        t=t+m;
    }

    printf("%d\n",t);
    return 0;
}
