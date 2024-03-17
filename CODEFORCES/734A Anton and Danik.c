#include<stdio.h>
int main()
{
    char s[100001];
    long int n,i=0,a=0,d=0;
    scanf("%ld",&n);
    scanf("%s",s);
    while(1)
    {
        if(s[i]=='\0')
        {
            break;
        }
        else if(s[i]=='A')
        {
            a++;
        }
        else if(s[i]=='D')
        {
            d++;
        }
        i++;
    }
    if(a>d)
    {
        printf("Anton\n");
    }
    else if(a<d)
    {
        printf("Danik\n");
    }
    else
    {
        printf("Friendship\n");
    }
    return 0;
}
