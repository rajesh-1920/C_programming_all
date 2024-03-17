#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,ls,lt,nt=0,ns=0,n;
    char s[10000],t[10000];
    gets(s);
    gets(t);
    ls=strlen(s);
    lt=strlen(t);
    for(i=0;i<ls;i++)
    {
       n=s[i];
       ns=ns+n;
    }
    for(i=0;i<lt;i++)
    {
       n=t[i];
       nt=nt+n;
    }
    if(ns>nt)
    {
        printf("%s",t);
    }
    else if(ns<=nt)
    {
        printf("%s",s);
    }
}
