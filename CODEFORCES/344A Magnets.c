#include<stdio.h>
int main()
{
    long int n,i,c10=0,c01=0,r;
    scanf("%ld",&n);
    long int s[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++)
    {
        if(s[i]==10 && s[i+1]!=10)
        {
            c10++;
        }
        if(s[i]==01 && s[i+1]!=01)
        {
            c01++;
        }
    }
    r=c01+c10;
    printf("%d\n",r);
    return 0;
}
