#include<stdio.h>
#include<string.h>
int main(void)
{
    long long int n[26],c[26],i,j,t1;
    char s[10000000];
    gets(s);
    for(i=0;i<26;i++)
    {
        c[i]=0;
        n[i]=i+97;
    }
    for(i=0;i;i++)
    {
        if(s[i]=='\0')
        {
            break;
        }
        for(j=0;j<26;j++)
        {
            t1=(int)s[i];
            if(t1==n[j])
            {
                c[j]++;
            }
        }
    }
    for(i=0;i<26;i++)
    {
        if(c[j]>0)
        {
            printf("%c : %lld\n",n[j],c[j]);
        }
    }
}
