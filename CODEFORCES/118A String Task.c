#include<stdio.h>
#include<string.h>
int main()
{
    char s[110],r[210];
    int i,l,n=0;
    scanf("%s",s);
    l=strlen(s);
    for(i=0; i<l; i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'
                ||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='y'||s[i]=='Y')
        {
            continue;
        }
        r[n]='.';
        n++;
        r[n]=(tolower(s[i]));
        n++;
    }
    r[n]='\0';
    printf("%s\n",r);
    return 0;
}
