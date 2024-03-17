#include<stdio.h>
int main(void)
{
    int i,t,c,j;
    char s[15],a[]= {"codeforces"};
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        c=0;
        scanf("%s",s);
        for(j=0; j<10; j++)
        {
            if(s[j]!=a[j])
            {
                c++;
            }
        }
        printf("%d\n",c);
    }
}
