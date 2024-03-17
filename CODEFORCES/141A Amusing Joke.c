#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,j,l,p1,p2;
    char a[110],b[110],c[110],temp;
    scanf("%s%s%s",&a,&b,&c);
    l=strlen(c);
    for(i=0; i<l; i++)
    {
        for(j=0; j<l; j++)
        {
            p1=c[j];
            p2=c[j+1];
            if(p1>p2&&c[j+1]!='\0')
            {
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
    strcat(a,b);
    l=strlen(a);
    for(i=0; i<l; i++)
    {
        for(j=0; j<l; j++)
        {
            p1=a[j];
            p2=a[j+1];
            if(p1>p2&&a[j+1]!='\0')
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    if(strcasecmp(a,c)==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
