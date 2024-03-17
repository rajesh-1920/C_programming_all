/*p-18*/
/*divide days to year month days*/

#include<stdio.h>
int main()/*main function start*/
{
    int days=0, years=0, months=0; /*variable*/

    printf("Input the no. of days: "); /*prompt*/
    scanf("%d",&days); /*taking total days*/

    years=days/365; /*calculate total years*/
    printf("%d Year(s)\n",years); /*showing total years*/

    days=days%365; /*calculate remaining days after years*/
    months=days/30; /*calculate total months*/
    printf("%d Month(s)\n",months); /*showing total months*/

    days=days%30; /*calculate remaining days after months*/
    printf("%d Day(s)\n",days); /*showing total days*/


    return 0;
}/*End of main function*/
