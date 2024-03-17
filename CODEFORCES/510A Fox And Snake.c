#include<stdio.h>
int main(void)
{
   int n,m,i,j,t,a;
   scanf("%d%d",&n,&m);
   for(i=1; i<=n; i++)
        {
            a=i/2;
            if(a%2==0)
            {
                t=1;
            }
            else
            {
                t=0;
            }
            for(j=1; j<=m; j++)
            {
                if(i%2!=0)
                {
                    printf("#");
                }
                else if(t==0&&j==m)
                {
                    printf("#");
                }
                else if(t==1&&j==1)
                {
                    printf("#");
                }
                else
                {
                    printf(".");
                }
            }
        printf("\n");
        }
}
