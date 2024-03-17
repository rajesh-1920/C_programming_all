#include<stdio.h>
int main()
{
    char s[110],t[110];
    int i,c=0,x;
    gets(s);
    gets(t);
    while(1)
    {
        if(s[c]=='\0')
        {
            break;
        }
        c++;
    }
    for(i=0;i<c;i++)
    {
        x=0;
        if(s[i]!=t[c-1-i])
        {
            x++;
            break;
        }
    }
    if(x==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
