#include<stdio.h>
int main(void)
{
    long int p;
    int n;
    double q;

    printf(" ----------------------------------------\n");
    printf(" 2 to power n      n       2 to power -n\n");
    printf(" ----------------------------------------\n");

    p=1;
    for(n=0; n<=20; n++)
    {
        if(n==0)
            p=1;
        else
            p*=2;
        q=1.0/(double)p;
        printf("%10d%10d%20.12lf\n",p,n,q);
    }
    printf(" ----------------------------------------\n");
}
