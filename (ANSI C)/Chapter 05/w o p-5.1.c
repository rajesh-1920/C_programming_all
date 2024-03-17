/*W O p-5.1*/
/*use of getchar*/

#include<stdio.h>
int main()  /*start of main function*/
{
    char answer;  /*variable*/

    printf("Would you like to know my name?\n"); /*prompt*/
    printf("Type Y for YES and N for NO: "); /*prompt*/

    answer=getchar(); /*reading the character*/

    if(answer=='y'||answer=='Y')
    {
        printf("\nMy name is BUSY BEE\n");  /*display result*/
    }
    else
    {
        printf("\nYou are good for nothing\n");  /*display result*/
    }

    return 0;
}  /*end of main function*/
