//Watermelon division in even weight....

#include<stdio.h>

int main()//start of main function
{
    int w,temp,n;//variable

    scanf("%d",&w);//take weight from user

    temp=w%2;//calculation

    if(temp==0)//(1st if)condition for divided into two pieces
    {
        n=w/2;//calculation for divided into two pieces

        if(n%2==0)//(2nd if)condition for divided weight even or odd
        {
            printf("YES\n");//display result
        }//end of 2nd if
        else
        {
           int i=w-2;//calculation of shorting

           if(i!=0&&i%2==0)//(3rd if)condition for test shorting weight
           {
               printf("YES\n");//display result
           }//end of 3rd if
           else
           {
               printf("NO\n");//display result
           }
        }
    }//end of 1st if
    else
    {
        printf("NO\n");//display result
    }

    return 0;
}//End of main function
