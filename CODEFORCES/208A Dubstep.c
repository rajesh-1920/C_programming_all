#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,l,j,t;
    char s[210];
    gets(s);
    l=strlen(s);
    for(i=0; i<l; i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            for(j=i; j<l; j++)
            {
                s[i]=' ';
                s[j+1]=s[j+3];
            }
        }
    }
    l=strlen(s);
    for(i=0; i<l; i++)
    {
        if(s[i]==' '&&s[i+1]==' ')
        {
            for(j=i; j<l; j++)
            {
                s[i]=' ';
                s[j+1]=s[j+2];
            }
        }
    }
    l=strlen(s);
    if(s[0]==' ')
    {
        for(j=0; j<l; j++)
        {
            s[j]=s[j+1];
        }
    }
    printf("%s\n",s);
}
