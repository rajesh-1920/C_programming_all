#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,j,l,t;
    char a[110];
    scanf("%s",&a);
    l=strlen(a);
    t=1;
    for(i=0; i<l; i++)
    {
        if(a[i]=='H'||a[i]=='Q'||a[i]=='9')
        {
            t=0;
            break;
        }
    }
    if(t==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
