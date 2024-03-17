#include<stdio.h>
int main()
{
    int n,i,c;
    char s[110];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        c=0;
        scanf("%s",s);
        while(1)
        {
            if(s[c]=='\0')
            {
                break;
            }
            c++;
        }
        if(c<=10)
        {
            printf("%s\n",s);
        }
        else
        {
            printf("%c%d%c\n",s[0],c-2,s[c-1]);
        }
    }
    return 0;
}
