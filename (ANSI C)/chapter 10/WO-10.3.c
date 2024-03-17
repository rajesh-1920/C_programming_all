#include<stdio.h>
void printline(char c,int len);
float value(float,float,int);

int main(void)
{
    int period;
    float inrate,principle,amount;
    printf("Principle amount ? : ");
    scanf("%f",&principle);
    printf("Interest rate ? : ");
    scanf("%f",&inrate);
    printf("Period ? : ");
    scanf("%d",&period);
    printline('*',52);
    amount=value(principle,inrate,period);
    printf("%8.2f %5.2f %5d %12.2f\n",principle,inrate,period,amount);
    printline('=',52);
}
float value(float p,float r,int n)
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
    return sum;
}
void printline(char c,int len)
{
    while(len--)
        printf("%c",c);
    printf("\n");
}
