#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,t,l,r,f,j,k,h;
    char s[110];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%s",s);
        l=strlen(s);
        r=0;
        if(l%2!=0)
        {
            r=1;
        }
        else
        {
            h=l/2;
            k=0;
            for(j=0;j<h;j++)
            {
                if(s[j]!=s[j+h])
                {
                    k=1;
                    break;
                }
            }
            if(k==1)
            {
                r=1;
            }
        }
        if(r==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
