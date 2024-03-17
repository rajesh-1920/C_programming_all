#include<stdio.h>
#include<string.h>
int main(void)
{
    int d=1,i,j=0,p1,p2,m,t=0;
    char a[1010],temp;
    gets(a);
    for(i=0; a[i]!='\0'; i++)
    {
        p1=a[i];
        if(p1>=97&&p1<=122)
        {
            a[j]=a[i];
            j++;
            t++;
        }
    }
    m=j;
    a[j]='\0';
    for(i=0; i<m; i++)
    {
        for(j=0; j<m-1; j++)
        {
            p1=a[j];
            p2=a[j+1];
            if(p1>p2)
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(j=0; j<m-1; j++)
    {
        p1=a[j];
        p2=a[j+1];
        if(p1!=p2)
        {
            d++;
        }
    }
    if(t==0)
    {
        d=0;
    }
    printf("%d\n",d);
}
