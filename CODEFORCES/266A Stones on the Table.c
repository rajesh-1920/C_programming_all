#include<stdio.h>
int main()
{
    int n,i,counter=0;
    char s[60];
    scanf("%d",&n);
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
            counter++;
        }
        if(s[n-1]==s[n])
        {
            counter++;
        }

    }
    printf("%d\n",(counter));
    return 0;
}
