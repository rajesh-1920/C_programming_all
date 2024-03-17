#include<stdio.h>
int main(void)
{
    long int n,i,s[100010],c4=0,c1=0,c2=0,c3=0,r1,R,r2,r3,r4;
    scanf("%ld",&n);
    for(i=0; i<n; i++)
    {
        scanf("%ld",&s[i]);
        if(s[i]==4)
        {
            c4++;
        }
        else if(s[i]==3)
        {
            c3++;
        }
        else if(s[i]==2)
        {
            c2++;
        }
        else
        {
            c1++;
        }
    }
    r4=c4;
    if(c1<=c3)
    {
        r3=c3;
        c1=0;
    }
    else
    {
        r3=c3;
        c1=c1-c3;
    }
    r2=c2/2;
    if(c2%2!=0&&c2!=0)
    {
        r2=r2+1;
        if(c1==1)
        {
            c1=c1-1;
        }
        else if(c1>=2)
        {
            c1=c1-2;
        }
    }
    r1=c1/4;
    if(c1%4!=0&&c1!=0)
    {
        r1=r1+1;
    }
    R=r4+r3+r2+r1;
    printf("%ld\n",R);
}
