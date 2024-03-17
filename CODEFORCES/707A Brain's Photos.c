#include<stdio.h>
int main(void)
{
    int n,m,i,j,r;
    scanf("%d%d",&n,&m);
    char s[n+1][m+1];
    r=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("\n%c",&s[i][j]);
            if((s[i][j]=='C')||(s[i][j]=='M')||(s[i][j]=='Y'))
            {
                r++;
            }
        }
    }
    if(r==0)
    {
        printf("#Black&White\n");
    }
    else
    {

        printf("#Color\n");
    }
}
