/*p-4.7*/
/*calculate Economic Order Quantity  and Time Between Order*/

#include<stdio.h>
#include<math.h>
int main() /*start of main function*/
{
    double EOQ,TBO,dr,sc,hc; /*variable*/

    printf("Enter demand rate: ");
    scanf("%lf",&dr);
    printf("Enter setup coast: "); /*prompt*/
    scanf("%lf",&sc);    /*taking value*/
    printf("Enter holding coast: ");
    scanf("%lf",&hc);

    EOQ=sqrt((2.0*dr*sc)/(hc));  /*calculate EOQ*/
    TBO=sqrt((2.0*sc)/(dr*hc));  /*calculate TBO*/

    printf("EOQ = %.3lf\n",EOQ); /*showing EOQ*/
    printf("TBO = %.3lf\n",TBO); /*showing TBO*/

    return 0;
} /*end of main function*/
