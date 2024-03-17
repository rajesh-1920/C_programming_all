#include<stdio.h>
#include<string.h>
int main(void)
{
    int ls,lt;
    char s[10000],t[10000],n[10000],c;
    gets(s);
    gets(t);
    strcpy(n,s);
    ls=strlen(s);
    lt=strlen(t);
    strcat(n,t);
    c=s[0];
    s[0]=t[0];
    t[0]=c;
    printf("%d %d\n",ls,lt);
    printf("%s\n",n);
    printf("%s %s\n",s,t);
}
