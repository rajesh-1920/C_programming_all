#include<stdio.h>
#include<string.h>
int main(void)
{
    long int i,t,j,n,r,c1,c2,min1,min2;
    char s[5],x[]={"11"},y[]={"10"},z[]={"01"};
    scanf("%ld",&t);
    for(i=0; i<t; i++)
    {
        r=60000000;
        min1=30000000;
        min2=30000000;
        c1=0;
        c2=0;
        scanf("%ld",&n);
        long int m[n];
        for(j=0; j<n; j++)
        {
            scanf("%ld%s",&m[j],s);
            if(strcmp(s,x)==0&&r>m[j])
            {
                r=m[j];
                c1++;
                c2++;
            }
            if(strcmp(s,y)==0&&min1>m[j])
            {
                min1=m[j];
                c1++;
            }
            if(strcmp(s,z)==0&&min2>m[j])
            {
                min2=m[j];
                c2++;
            }
        }
        if(min1+min2<r)
        {
            r=min1+min2;
        }
        if(c1==0||c2==0)
        {
            r=(-1);
        }
        printf("%ld\n",r);
    }
}
