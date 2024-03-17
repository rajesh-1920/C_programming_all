#include<stdio.h>
void printline(char c);
void value(float,float,int);

int main(void)
{
    int period;
    float inrate,principle;
    printf("Principle amount ? : ");
    scanf("%f",&principle);
    printf("Interest rate ? : ");
    scanf("%f",&inrate);
    printf("Period ? : ");
    scanf("%d",&period);
    printline('Z');
    value(principle,inrate,period);
    printline('C');
}
void value(float p,float r,int n)
{
    int year;
    float sum;

    sum=p;
    year=1;
    while(year<=n)
    {
        sum+=sum*r;
        year++;
    }
    printf("%8.2f %5.2f %5d %12.2f\n",p,r,n,sum);
}
void printline(char c)
{
    int i=35;
    while(i--)
        printf("%c",c);
    printf("\n");
}
