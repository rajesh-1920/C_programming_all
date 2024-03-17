#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define CYCLE 60

void delay(ms) /*for wait 1 second*/
{
    clock_t timeDelay = ms+clock();
    while(timeDelay > clock());
}

int main() /*start of main function*/
{
    int i, hours=0, minutes=0, seconds=0, h=0, m=0, s=0;  /*variable */

    printf("Enter your time (Hours) (Minutes) (Seconds)\n"); /*prompt*/
    scanf("%d%d%d",&hours,&minutes,&seconds); /*taking total time from users*/

    system("cls");  /*clear display for a fresh look*/
    while(1)
    {
        printf("   ############\n");  /*decoration*/
        printf("   ############\n");  /*decoration*/
        printf("  ##############\n");  /*decoration*/
        printf(" ###          ###\n");  /*decoration*/
        printf("#### %.2d:%.2d:%.2d  ###\n",h,m,s); /*showing time*/
        printf(" ###          ###\n");  /*decoration*/
        printf("  ##############\n");  /*decoration*/
        printf("   ############\n");  /*decoration*/
        printf("   ############\n");  /*decoration*/
        printf("   ############\n");  /*decoration*/

        if(h==hours && m==minutes && s==seconds) /*ending condition*/
        {
            break; /*finish loop when total time end*/
        }

        delay(1000);

        system("cls"); /*clear display for a fresh look*/

        s++; /*time increasing by 1 second*/

        if(s==CYCLE) /*when it is 60 second*/
        {
            m++; /*minute increase by 1*/
            s=0;  /*second reset to 0 and increase again with loop*/
        }
        if(m==CYCLE) /*when it is 60 minutes*/
        {
            h++; /*hour increase by 1*/
            m=0;  /*minute reset to 0 and increase again with loop*/
        }

    } /*end while*/

    return 0;
}/*End of main function*/
