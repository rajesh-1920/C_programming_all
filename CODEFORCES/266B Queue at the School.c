#include<stdio.h>
int main(void)
{
    int n,i,t,j;
    scanf("%d%d",&n,&t);
    char s[n],temp;
    scanf("%s",s);
    for(j=0; j<t; j++)
    {
        i=0;
        while(1)
        {
            if(s[i]=='\0'||i>=n)
            {
                break;
            }
            if(s[i]=='B'&&s[i+1]=='G')
            {
                temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
                i=i+2;
            }
            else
            {
                i++;
            }
        }
    }
    printf("%s\n",s);
}

