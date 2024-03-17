#include<stdio.h>
void sort(int a[],int len);
int main(void)
{
    int i,j,t;
    int marks[5]= {40,90,73,81,35};
    printf("Marks before sorting:\n");
    for(i=0; i<5; i++)
        printf("%d ",marks[i]);
    printf("\n\n");
    sort(marks,5);
    printf("Marks after sorting:\n");
    for(i=0; i<5; i++)
        printf("%d ",marks[i]);
    printf("\n");
}
void sort(int a[],int len)
{
    int i,j;
    for(i=0; i<len; i++)
    {
        for(j=0; j<len-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
            }
        }
    }
}
