#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,n;
    char s[1000000],t[1000000];
    gets(s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='\\')
        {
            break;
        }
        t[i]=s[i];
    }
    t[i]='\0';
    printf("%s\n",t);
}
