#include<stdio.h>
int main()
{
    int s[4],n=0,temp,j,i;
    for(i=0; i<4; i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(s[i]<s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    for(i=0; i<4; i++)
    {
        if(s[i]==s[i+1])
        {
            n++;
        }
    }
    printf("%d\n",n);
    return 0;
}
