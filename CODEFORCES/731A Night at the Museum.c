#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,j,r,l,r1,r2,R;
    char a[110];
    scanf("%s",&a);
    l=strlen(a);
    if(a[0]<='n')
    {
        R=a[0]-'a';
    }
    else
    {
        R='z'-a[0]+1;
    }
    for(i=0; i<l-1; i++)
    {
        r1=a[i]-a[i+1];
        r2=abs(r1);
        if(r2<=13)
        {
            R=R+r2;
        }
        else
        {
            if(r1>0)
            {
                R=R+('z'-a[i]+1)+(a[i+1]-'a');
            }
            else
            {
                R=R+('z'-a[i+1]+1)+(a[i]-'a');
            }
        }
    }
    printf("%d\n",R);
}
