/*p-12*/
/*salary calculate*/

#include<stdio.h>
int main()/*main function start*/
{
    int ID=0; /*variable for id*/
    double wh=0, amount=0, salary=0; /*Variable*/

    printf("Input the Employees ID: "); /*prompt*/
    scanf("%d",&ID); /*take id*/

    printf("Input the working hours: "); /*prompt*/
    scanf("%lf",&wh); /*take working hours*/

    printf("Input the salary amount/hour: "); /*prompt*/
    scanf("%lf",&amount); /*take id*/

    salary=wh*amount; /*calculation salary*/

    printf("Employees ID = %d\n",ID); /*display id*/
    printf("Salary = U$ %.2lf",salary); /*display total salary*/

    return 0;
}/*End of main function*/
