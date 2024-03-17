/*W O p-5.7(A)*/
/*illustrates functions of %[]specification*/

#include<stdio.h>
int main()  /*start of main function*/
{
    char address[80];  /*variable*/

    printf("Enter address:\n");  /*prompt*/
    scanf("%[a-z]",address); /*taking input*/
    printf("\n%-80s\n\n",address); /*showing result*/

    return 0;
}  /*end of main function*/
