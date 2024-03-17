#include<stdio.h>
#include<string.h>
int main(void)
{
    long int i,n,sum=0,d;
    char s[1000000];
    gets(s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='9'){d=9;}
        else if(s[i]=='8'){d=8;}
        else if(s[i]=='7'){d=7;}
        else if(s[i]=='6'){d=6;}
        else if(s[i]=='5'){d=5;}
        else if(s[i]=='4'){d=4;}
        else if(s[i]=='3'){d=3;}
        else if(s[i]=='2'){d=2;}
        else if(s[i]=='1'){d=1;}
        else if(s[i]=='0'){d=0;}
       sum=sum+d;
    }
    printf("%ld\n",sum);
}
