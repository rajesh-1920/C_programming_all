#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,l;
    char a[210];
    scanf("%s",a);
    l=strlen(a);
    i=0;
    while(1)
    {
        if(a[i]=='.')
        {
            printf("0");
            i++;
        }
        if(a[i]=='-'&&a[i+1]=='.')
        {
            printf("1");
            i=i+2;
        }
        if(a[i]=='-'&&a[i+1]=='-')
        {
            printf("2");
            i=i+2;
        }
        if(i>=l)
        {
            break;
        }
    }
}
