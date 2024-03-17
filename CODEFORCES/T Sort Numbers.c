#include<stdio.h>
int main(void)
{
    long int A,B,C,n[5],i,j,temp;
    scanf("%ld%ld%ld",&A,&B,&C);
    n[0]=A;
    n[1]=B;
    n[2]=C;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(n[j]>=n[j+1])
            {
                temp=n[j];
                n[j]=n[j+1];
                n[j+1]=temp;
            }
        }
    }
    for(j=0; j<3; j++)
    {
        printf("%ld\n",n[j]);
    }
    printf("\n%ld\n%ld\n%ld\n",A,B,C);
}
