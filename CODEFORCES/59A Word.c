#include<stdio.h>
int main()
{
    char s[110];
    int i=0,u=0,l=0,j;
    gets(s);
    while(1)
    {
        if(s[i]=='\0')
        {
            break;
        }
        else if(s[i]>='a'&&s[i]<='z')
        {
            l++;
        }
        else if(s[i]>='A'&&s[i]<='Z')
        {
            u++;
        }
        i++;
    }
    if(l>=u)
    {
        for(j=0; j<i; j++)
        {
            if(s[j]>='A'&&s[j]<='Z')
            {
                s[j]=(s[j]+32);
            }
        }
    }
    else
    {
        for(j=0; j<i; j++)
        {
            if(s[j]>='a'&&s[j]<='z')
            {
                s[j]=(s[j]-32);
            }
        }
    }
    puts(s);
    return 0;
}
