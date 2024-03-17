#include<stdio.h>
int main(void)
{
    long int i,t,r;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld",&r);
        if(1900<=r)
        {
            printf("Division 1\n");
        }
        if(1600<=r&&r<=1899)
        {
            printf("Division 2\n");
        }
        if(1400<=r&&r<=1599)
        {
            printf("Division 3\n");
        }
        if(r<=1399)
        {
            printf("Division 4\n");
        }
    }
}
