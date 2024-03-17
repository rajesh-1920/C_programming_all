/*p-4.15*/
/*calculate calculate square-root and square*/

#include<stdio.h>
#include<math.h>
int main() /*start of main function*/
{
    double i,sr;  /*variable*/

    printf("number\tSquare-root\tsquare\n"); /*display*/

    for(i=0; i<=100; i=i+10)
    {
            sr=sqrt(i); /*calculate square root*/
            printf("%.2lf",i);
            printf("\t%.3lf",sr);  /*display result*/
            printf("\t\t%.3lf\n",i*i);
    }

    return 0;
} /*end of main function*/
