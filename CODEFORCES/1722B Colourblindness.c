#include<stdio.h>
int main(void)
{
    int i,j,t,l,r;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        r=0;
        scanf("%d",&l);
        char s1[l],s2[l];
        scanf("%s",s1);
        scanf("%s",s2);
        for(j=0; j<l; j++)
        {
            if(s1[j]=='R'&&(s2[j]=='G'||s2[j]=='B'))
            {
                r=1;
                break;
            }
            if(s2[j]=='R'&&(s1[j]=='G'||s1[j]=='B'))
            {
                r=1;
                break;
            }
        }
        if(r==0)
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }
    }
}
