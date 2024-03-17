#include<stdio.h>
void printline(void);
void value(void);

int main(void)
{
    printline();
    value();
    printline();
}
void value(void)
{
    int year,period;
    float inrate,sum,principle;
    printf("Principle amount ? : ");
    scanf("%f",&principle);
    printf("Interest rate ? : ");
    scanf("%f",&inrate);
    printf("Period ? : ");
    scanf("%d",&period);
    sum=principle;
    year=1;
    while(year<=period)
    {
        sum+=sum*inrate;
        year++;
    }
    printf("\n%8.2f %5.2f %5d %12.2f\n",principle,inrate,period,sum);
}
void printline(void)
{
    int i=35;
    while(i--)
        printf("-");
        printf("\n");
}
