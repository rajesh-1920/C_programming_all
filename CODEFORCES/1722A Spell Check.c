#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,k,t,j,p1,p2,n;
    scanf("%d",&t);
    for(k=0; k<t; k++)
    {
        char s[11],temp,s1[]="Timru";
        scanf("%d",&n);
        scanf("%s",s);
        for(i=0; i<n; i++)
        {
            for(j=0; j<n-1; j++)
            {
                p1=s[j];
                p2=s[j+1];
                if(p1>p2)
                {
                    temp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=temp;
                }
            }
        }
        if(strcmp(s,s1)==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
