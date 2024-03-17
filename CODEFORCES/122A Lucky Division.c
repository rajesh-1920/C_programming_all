#include<stdio.h>
int main()
{
    int n,b,count=0,c=0;
    scanf("%d",&n);
    if(n%4==0 || n%7==0 || n%44==0 || n%47==0 || n%744==0 || n%77==0)
    {
        printf("YES\n");
    }
    else
    {
        while(n>0)
        {
            b=n%10;
            if(b==4 || b==7)
            {
                c++;
            }
        n=n/10;
        count++;
        }
        if(c==count)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
