/*p-76*/
/*calculate square and cube*/

#include<stdio.h>

int main() /*main function start*/
{
    int i; /*variable*/

    printf("Number   Square   cube\n"); /*display*/
    printf("==========================\n"); /*display*/

    for(i=0;i<=20;i++) /*for capital letter*/
    {
        printf("%5d   %5d   %5d\n",i,i*i,i*i*i); /*display result*/
    }

    return 0;
}/*End of main function*/
