#include<stdio.h>
int main(void)
{
    int n,j,i,c=0,n1,n2;
    char a[110],temp;
    scanf("%d",&n);
    scanf("%s",a);
    for(i=0; i<n; i++)
    {
        a[i]=tolower(a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            n1=a[j];
            n2=a[j+1];
            if(n1>n2)
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(a[i]==a[i+1])
        {
            continue;
        }
        else
        {
            c++;
        }
    }
    if(c>=26)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
