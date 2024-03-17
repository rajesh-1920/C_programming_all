#include<stdio.h>
int main(void)
{
    int i;
    float sum=0,n[10];
    printf("ENTER 10 REAL NUMBERS\n");
    for(i=0;i<10;i++)
    {
        scanf("%f",&n[i]);
        sum=sum+(n[i]*n[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("x[%d] = %0.2f\n",i+1,n[i]);
    }
    printf("\nTotal = %0.2f\n",sum);
}
