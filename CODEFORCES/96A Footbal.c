#include<stdio.h>
int main()
{
    char s[110];
    int i=0,n1=0,n0=0,test=0;
    gets(s);
    while(1)
    {
        if(s[i]=='\0')
        {
            break;
        }
        else if(s[i]=='1')
        {
            n0=0;
            n1++;
        }
        else if(s[i]=='0')
        {
            n1=0;
            n0++;
        }
        i++;
        if(n0==7 || n1==7)
        {
            test=0;
            break;
        }
        else
        {
            test++;
        }
    }
    if(test==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
