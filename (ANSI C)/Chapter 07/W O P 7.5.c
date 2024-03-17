#include<stdio.h>
int main(void)
{
    int n,i,res,j,flag;
    printf(" Enter the value of n : ");
    scanf("%d",&n);
    printf(" Prime numbers between 1 to %d are : \n ",n);

    for(i=1; i<=n; i++)
    {
        if(i==2)
            printf("%d ",i);
        else if(i%2!=0&&i>2)
        {
            flag=1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
                printf("%d ",i);
        }
    }
    printf("\n");
}
