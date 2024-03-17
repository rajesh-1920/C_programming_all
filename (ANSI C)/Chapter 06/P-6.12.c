/*p-6.12*/
/*calculate total electric bill*/

#include<stdio.h>
int main() /*start of main function*/
{
    double u=0,total=100,u3=0,u2=0; /*variable*/
    char n[100];

    printf("Enter the users name: "); /*prompt*/
    gets(n); /*taking users name*/
    printf("Enter the consumed unit: "); /*prompt*/
    scanf("%lf",&u); /*taking unit*/

    if(u>300.00)
    {
        u3=u-300.00;
        total=total+(u3*1.0)+(100*0.9)+(200*0.8);  /*calculate bill*/
    }
    if(u>200.00 && u<=300.00)
    {
        u2=u-200;
        total=total+(u2*0.9)+(200*0.8);  /*calculate bill*/
    }
    if(u<=200.00)
    {
        total=total+(u*0.8);  /*calculate bill*/
    }

    if(total>400.00)
    {
        total=total+(total*0.15);  /*calculate additional surcharge*/
    }

    printf("Name of the users :  %s\n",n); /*showing name*/
    printf("Total bill = %.2lf\n",total); /*showing bill*/

    return 0;
} /*end of main function*/
