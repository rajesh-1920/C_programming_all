#include<stdio.h>
#include<string.h>
int main(void)
{
    int ls,lt;
    char s[10000],t[10000];
    gets(s);
    gets(t);
    ls=strlen(s);
    lt=strlen(t);
    printf("%d %d\n",ls,lt);
    printf("%s %s\n",s,t);
}
