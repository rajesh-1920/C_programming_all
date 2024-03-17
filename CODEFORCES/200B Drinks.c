#include<stdio.h>
int main()
{
    int n,i,p[110];
    float t=0,r;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&p[i]);
        t=t+((float)p[i]/100.0);

    }
    r=(t/(float)n)*100.0;
    printf("%f\n",r);
    return 0;
}
