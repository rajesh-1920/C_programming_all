/*W O p-5.6*/
/*reading string using %wc and %ws*/

#include<stdio.h>
int main()  /*start of main function*/
{
    int no;  /*variable*/
    char name1[15],name2[15],name3[15];  /*variable*/

    printf("Enter serial number and name one:\n");  /*prompt*/
    scanf("%d%15c",&no,name1);   /*taking input*/
    printf("\n%d %15s\n\n",no,name1);  /*showing result*/

    printf("Enter serial number and name two:\n");  /*prompt*/
    scanf("%d%s",&no,name2);   /*taking input*/
    printf("%d %15s\n\n",no,name2);  /*showing result*/

    printf("Enter serial number and name three:\n");  /*prompt*/
    scanf("%d%15s",&no,name3); /*taking input*/
    printf("%d %15s\n\n",no,name3); /*showing result*/

    return 0;
}  /*end of main function*/
