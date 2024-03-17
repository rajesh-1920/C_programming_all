/*--- calender ---*/

#include<stdio.h>
#include<stdlib.h>

int First_day_of_year(int year) /*function to get first day of a year*/
{
    int day=((year*365 + ((year-1)/4) + ((year-1)/400) - ((year-1)/100))%7); /*calculate first day*/
    return day; /*return day*/
    /*0=Sunday, 1=Monday, ,,,,,,,*/
}

/*----------- main function start -------------*/
int main()
{
    int i,j, year, week_ends=0, space_counter; /*variable*/
    char *month[]={"January","February","March","April","May","June","July","August","September","October","November","December"}; /*Name of months*/
    int days_of_month[]={31,28,31,30,31,30,31,31,30,31,30,31}; /*total days of month*/

    printf("\n Enter your favorite year: "); /*prompt*/
    scanf("%d",&year); /*taking year*/

    if((year%400==0)|| ((year%4==0) && (year%100!=0))) /*checking leap year*/
    {
        days_of_month[1]=29; /*set total days of February 29 on leap year*/
    } /*end leap year if*/

    week_ends= First_day_of_year(year); /*call function to get first day of the year*/
    system("cls"); /*clear screen*/

    printf("\n  ******* Welcome To The YEAR %d ********",year); /*design display*/

    for(i=0;i<12;i++) /*1st loop for print days & month name*/
    {
        printf("\n\n\n  --------------- %8s ----------------\n\n",month[i]); /*display name of month*/
        printf("   Sun   Mon   Tue   Wed   Thu   Fri   Sat \n"); /*display days name*/

        for(space_counter=0; space_counter<week_ends; space_counter++) /*give space to start a month for the end of before month */
        {
            printf("      "); /*giving 6 space*/
        }

        for(j=1; j<=days_of_month[i]; j++) /*2nd loop for print date number*/
        {
            printf("%6d",j); /*showing date*/

            week_ends++;
            if(week_ends==7) /*go to new line after 7days (a week)*/
            {
                week_ends=0;
                printf("\n");

            } /*end if*/
        } /*end 2nd loop*/
    } /*end 1st loop*/

    printf("\n\n\n");
    return 0;
}
/*---------- end of main function ---------*/
