/*W O p-5.10*/
/*use of various formate of output of real number*/

#include<stdio.h>
int main()  /*start of main function*/
{
    float y=98.7654;  /*variable*/

    printf("%7.4f\n",y); /*showing result*/
    printf("%f\n",y); /*showing result*/
    printf("%7.2f\n",y); /*showing result*/
    printf("%-7.2f\n",y); /*showing result*/
    printf("%07.2f\n",y); /*showing result*/
    printf("%*.*f",7,2,y); /*showing result*/
    printf("\n"); /*showing result*/
    printf("%10.2e\n",y); /*showing result*/
    printf("%12.4e\n",-y); /*showing result*/
    printf("%-10.2e\n",y); /*showing result*/
    printf("%e\n",y); /*showing result*/

    return 0;
}  /*end of main function*/
