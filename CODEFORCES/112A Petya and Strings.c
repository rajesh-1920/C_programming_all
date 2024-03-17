#include<stdio.h>
#include<string.h>
int main()
{
    char s1[110],s2[110];
    int i,l,r;
    scanf("%s",s1);
    scanf("%s",s2);
    l=strlen(s1);

    for(i=0; i<l; i++)
    {
        s2[i]=tolower(s2[i]);
        s1[i]=tolower(s1[i]);
        if(s1[i]>s2[i])
        {
            r=1;
            break;
        }
        else if(s1[i]<s2[i])
        {
            r=(-1);
            break;
        }
        else if(s1[i]==s2[i] && s1[i+1]=='\0')
        {
            r=0;
        }
    }

    printf("%d\n",r);
    return 0;
}
