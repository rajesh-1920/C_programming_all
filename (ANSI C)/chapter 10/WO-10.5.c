#include<stdio.h>
int pos(float ar[],int len);
int main(void)
{
    int n;
    float x[10]={12.5,3.0,45.1,8.2,19.3,10.0,7.8,23.7,29.9,5.2};
    printf("Enter the value of n : ");
    scanf("%d",&n);
    if(n<1||n>10)
        printf("Invalid value of n\n");
    else
        printf("Within the first %d elements of the array, the first minimum value is stored at index %d\n",n,pos(x,n));
    }
int pos(float ar[],int len)
{
    int p=0,i;
    float min;
    min=ar[0];
    for(i=0; i<len-1; i++)
    {
        if(ar[i]>min)
        {
            min=ar[i];
            p=i;
        }
    }
    return p;
}
