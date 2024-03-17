/*p-8*/
/*Convert days to years weeks and days*/

#include<stdio.h>
int main() /*main function start*/
{
    int days=0, years=0, weeks=0; /*variable*/

    printf("Number of days : "); /*prompt*/
    scanf("%d",&days); /*taking total days*/

    years=days/365; /*calculate years*/
    printf("Years: %d\n",years); /*Display years*/

    days=days%365;
    weeks=days/7; /*Calculate weeks*/
    printf("Weeks: %d\n",weeks); /*Display weeks*/

    days=days%7; /*Remaining days */
    printf("Days: %d\n",days); /*Display days*/

    return 0;
}/*End of main function*/
