/*p-4.19*/
/*checking a date is valid or not*/

#include<stdio.h>
int main() /*start of main function*/
{
    int d,m,y; /*variable*/

    printf("Enter day: ");
    scanf("%d",&d);
    printf("Enter month: "); /*prompt*/
    scanf("%d",&m);    /*taking value*/
    printf("Enter year: ");
    scanf("%d",&y);

    if(m>12 || d>31)
    {
        printf("Invalid date\n");
    }
    else
    {
        if((y%400==0) || ((y%4==0) && (y%100!=0))) /*checking leap year*/
        {
            if(m==2)
            {
                if(d>=1 && d<=29)
                {
                    printf("Valid date");
                }
                else
                {
                    printf("Invalid date\n");
                }
            }
            else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
            {
                if(d>=1 && d<=31)
                {
                    printf("Valid date");
                }
                else
                {
                    printf("Invalid date\n");
                }
            }
            else if(m==4||m==6||m==9||m==11)
            {
                if(d>=1 && d<=30)
                {
                    printf("Valid date");
                }
                else
                {
                    printf("Invalid date\n");
                }
            }
            else
            {
                printf("Invalid date\n");
            }
        }

        else
        {
            if(m==2)
            {
                if(d>=1 && d<=28)
                {
                    printf("Valid date");
                }
                else
                {
                    printf("Invalid date\n");
                }
            }
            else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
            {
                if(d>=1 && d<=31)
                {
                    printf("Valid date");
                }
                else
                {
                    printf("Invalid date\n");
                }
            }
            else if(m==4||m==6||m==9||m==11)
            {
                if(d>=1 && d<=30)
                {
                    printf("Valid date");
                }
                else
                {
                    printf("Invalid date\n");
                }
            }
            else
            {
                printf("Invalid date\n");
            }
        }
    }

    return 0;
}  /*end of main function*/
