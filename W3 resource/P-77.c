/*p-77*/
/*simple interest calculation*/

#include<stdio.h>

int main()/*start of main function*/
{
    float inrate,total,principle,days; /*variable*/

    printf("Enter your principle amount: "); /*prompt*/
    scanf("%f",&principle); /*taking principle*/

    printf("Enter your total days: "); /*prompt*/
    scanf("%f",&days); /*taking days*/

    printf("Enter your interest rate per year: "); /*prompt*/
    scanf("%f",&inrate); /*taking inrate*/

    total=principle*days*inrate/365; /*calculate total interest*/

    printf("The interest amount is = %.2f\n",total); /*showing interest*/

    return 0;
}/*End of main function*/
