/*W O p-5.9*/
/*use of various formate of output of integers number*/

#include<stdio.h>
int main()  /*start of main function*/
{
    int m=12345;  /*variable*/
    long n=987654;  /*variable*/

    printf("%d\n\n",m); /*showing result*/
    printf("%10d\n\n",m); /*showing result*/
    printf("%010d\n\n",m); /*showing result*/
    printf("%-10d\n\n",m); /*showing result*/
    printf("%10ld\n\n",n); /*showing result*/
    printf("%10ld\n\n",-n); /*showing result*/

    return 0;
}  /*end of main function*/
