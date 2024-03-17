#include<stdio.h>
#include<string.h>
int main(void)
{
    int k,t,l,j,i;
    char a[110],b[110];
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%s",b);
        l=strlen(b);
        if(l==2)
        {
            a[0]=b[0];
            a[1]=b[1];
            a[2]='\0';
        }
        else
        {
            a[0]=b[0];
            j=1;
            for(i=1;i<l-1;i=i+2)
            {
                a[j]=b[i];
                j++;
            }
            a[j]=b[l-1];
            a[j+1]='\0';
        }
        printf("%s\n",a);
    }
}
