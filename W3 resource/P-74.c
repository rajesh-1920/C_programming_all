/*p-74*/
/*print alphabet's ASCII value*/

#include<stdio.h>

int main() /*main function start*/
{
    char a[]="abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i; /*variable*/

    printf("List of the integers equivalents of letters (a-z, A-Z)\n"); /*display*/
    printf("======================================================\n"); /*display*/

    for(i=0;a[i]!='\0';i++) /*for capital letter*/
    {
        printf("%d ",a[i]); /*display result*/
    }

    return 0;
}/*End of main function*/
