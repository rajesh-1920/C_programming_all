#include<stdio.h>
int main(void)
{
    int a[3],i,j,k,t,temp;
    scanf("%d",&t);
    for(k=0; k<t; k++)
    {
        scanf("%d%d%d",&a[0],&a[1],&a[2]);
        for(i=0; i<3; i++)
        {
            for(j=0; j<2; j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        if(a[2]==a[0]+a[1])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
