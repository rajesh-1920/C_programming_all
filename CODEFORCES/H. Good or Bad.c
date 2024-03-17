#include<stdio.h>
#include<string.h>
int main(void)
{
    char s[1000000],c1,c0;
    c1='1';
    c0='0';
    long int i,j,n,n1,n2,n3,f,t,x1,x0;
    x1=c1;
    x0=c0;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        f=0;
        scanf("%s",s);
        n=strlen(s);
        for(j=0;j<n;j++)
        {
            n1=s[j];
            n2=s[j+1];
            n3=s[j+2];
            if(s[j+2]=='\0')
            {
                break;
            }
            if(n1==c1&&n2==c0&&n3==c1)
            {
                f++;
                printf("Good\n");
                break;
            }
            else if(n1==c0&&n2==c1&&n3==c0)
            {
                f++;
                printf("Good\n");
                break;
            }
        }
        if(f==0)
        {
            printf("Bad\n");
        }
    }
}
