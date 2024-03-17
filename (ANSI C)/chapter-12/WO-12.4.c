#include<stdio.h>
int main(void)
{
    int *p,sum,i;
    int x[5]= {5,9,6,3,7};
    i=0;
    p=x;
    sum=0;
    printf("Element value address\n\n");
    while(i<5)
    {
        printf("x[%d]  %d  %u\n",i,*p,p);
        sum+=*p;
        i++;
        p++;
    }
    printf("\nSum = %d\n",sum);
    printf("&x[0] = %u\n",&x[0]);
    printf("p = %u\n",p);
}
