#include<stdio.h>
int main(void)
{
    int t,n,x,k,r,i,j,l,c,m;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d%d",&x,&k);
        for(j=x; j>=0; j--)
        {
            c=0;
            for(l=0; l<=x; l++)
            {
                if(l+j==x&&((l%k!=0&&j%k!=0)||(l==0&&j%k!=0)||(j==0&&l%k!=0)))
                {
                    if(l==0||j==0)
                    {
                        m=1;
                        if(l==0)
                        {
                            l=j;
                        }
                        printf("%d\n%d\n",m,l);
                    }
                    else
                    {
                        m=2;
                        printf("%d\n%d %d\n",m,l,j);
                    }
                    c++;
                    break;
                }
            }
            if(c!=0)
            {
                break;
            }
        }
    }
}
