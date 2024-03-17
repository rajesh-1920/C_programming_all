#include<stdio.h>
int main(void)
{
    int i;
    float sum=0,n,ave;
    printf("Enter the values one after another.\nEnter a negative value to stop.\n");
    for(i=0;i<1000;i++)
    {
        scanf("%f",&n);
        if(n<0)
            break;
        sum=sum+n;
    }
    ave=sum/((float)i);
    printf("\nTotal number = %d",i);
    printf("\nSum = %f",sum);
    printf("\nAverage = %f",ave);
}
