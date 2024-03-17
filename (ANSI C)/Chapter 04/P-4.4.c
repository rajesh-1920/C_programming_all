/*p-4.4*/
/*calculate salvage value of an item*/

#include<stdio.h>
int main() /*start of main function*/
{
    float dep,pur_p,slv,yos; /*variable*/

    printf("Enter the annual depreciation: ");
    scanf("%f",&dep);
    printf("Enter the purchase price: "); /*prompt*/
    scanf("%f",&pur_p);   /*taking purchase price*/
    printf("Enter the years of service: ");
    scanf("%f",&yos);

    slv=pur_p-(dep*yos); /*calculate salvage value*/

    printf("The salvage value of the item is = %.2f\n",slv); /*display the salvage value*/

    return 0;
}  /*end of main function*/
