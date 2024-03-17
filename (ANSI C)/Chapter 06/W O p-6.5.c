/*worked out problem: 6.5*/
/*calculate total electric charge by if else ladder*/

#include<stdio.h>

int main() /*main function start*/
{
    int c_number; /*variable*/
    float units,charge;

    printf("Enter the customer number and consume units:\n"); /*prompt*/
    scanf("%d%f",&c_number,&units); /*taking input*/

    if(units>=0.0 && units<=200.0)
    {
        charge=units*0.5;
    }
    else if(units>=201.0 && units<=400.0)
    {
       charge=100.0+((units-200.0)*0.65);
    }
    else if(units>=401.0 && units<=600.0)
    {
       charge=230.0+((units-400.0)*0.80);
    }
    else
    {
       charge=390.0+((units-600.0)*1.00);
    }

    printf("customer number is = %d  total charge = %.2f\n",c_number,charge); /*display result*/

    return 0;
} /*end of main function*/
