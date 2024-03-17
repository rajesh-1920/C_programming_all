#include<stdio.h>
int main()
{
    char s[110],r[6];
    int i=0,h=0,e=0,l1=0,l2=0,o=0,x=0;
    scanf("%s",s);
    while(1)
    {
        if(s[i]=='\0')
        {
            printf("NO\n");
            break;
        }
        else if(s[i]=='h' && h==0)
        {
            r[0]='h';
            r[1]='\0';
            h++;
        }
        else if(s[i]=='e' && h>=1 && e==0)
        {
            r[1]='e';
            r[2]='\0';
            e++;
        }
        else if(s[i]=='l' && e>=1 && l1==0)
        {
            r[2]='l';
            r[3]='\0';
            l1++;
        }
        else if(s[i]=='l' && l1>=1 && l2==0)
        {
            r[3]='l';
            r[4]='\0';
            l2++;
        }
        else if(s[i]=='o' && l2>=1 && o==0)
        {
            r[4]='o';
            r[5]='\0';
            x=6;
            o++;
        }
        if(x==6)
        {
            printf("YES\n");
            break;
        }
        i++;
    }
    return 0;
}
