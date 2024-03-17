#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    int i,j,k,len;
    char a[16];
    printf("Enter a binary number\n");
    gets(a);
    len=strlen(a);
    for(i=0; i<len; i++)
    {
        if(a[i]!='0'&&a[i]!='1')
        {
            printf("\nIncorrect binary number\n");
            exit(0);
        }
    }
    for(i=len-1; a[i]!='1'; i--);
    for(j=i-1; j>=0; j--)
    {
        if(a[j]=='0')
            a[j]='1';
        else
            a[j]='0';
    }
    printf("Two's complement is = %s\n",a);
}
