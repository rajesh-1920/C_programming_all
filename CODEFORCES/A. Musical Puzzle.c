#include<stdio.h>
int main(void)
{
    int i,t,n,j,k,r,c;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        char s[n];
        scanf("%s",&s);
        r=n-1;
        c=0;
        for(k=0; k<n; k++)
        {
            for(j=k+1; j<n; j++)
            {
                c=0;
                if(s[k]==s[j]&&s[k+1]==s[j+1])
                {
                    c=1;
                    break;
                }
            }
            r=r-c;
        }
        printf("%d\n",r);
    }
}
