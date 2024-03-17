/*p-70*/
/*print alphabet with ASCII value*/

#include<stdio.h>

int main() /*main function start*/
{
    int i; /*variable*/

    for(i=65;i<=90;i++) /*for capital letter*/
    {
        printf("[%d-%c] ",i,i); /*display result*/
    }

    for(i=97;i<=122;i++) /*for small letter*/
    {
        printf("[%d-%c] ",i,i); /*display result*/
    }

    return 0;
}/*End of main function*/
