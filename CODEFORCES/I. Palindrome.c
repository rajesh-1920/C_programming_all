#include<stdio.h>
#include<string.h>
int main(void)
{
    char s[10000],t[10000];
    gets(s);
    strcpy(t,s);
    strrev(s);
    if(strcasecmp(t,s)==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
