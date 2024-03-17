#include<stdio.h>
int main(void)
{
    int n,m,i,d,j,temp;
    scanf("%d%d",&n,&m);
    int f[m];
    for(i=0; i<m; i++)
    {
        scanf("%d",&f[i]);
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            if(f[j]>f[j+1])
            {
                temp=f[j];
                f[j]=f[j+1];
                f[j+1]=temp;
            }
        }
    }
    d=f[n-1]-f[0];
    for(i=0; i<m; i++)
    {
        {
            j=f[n+i-1]-f[i];
            if(j>=0&&j<=d)
            {
                d=j;
            }
        }
        if(f[i+n-1]==f[m])
        {
            break;
        }
    }
    printf("\n%d\n",d);
}
