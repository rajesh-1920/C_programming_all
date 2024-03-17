/*W O p-5.8*/
/*reading data by scanf function*/

#include<stdio.h>
int main()  /*start of main function*/
{
    int a;  /*variable*/
    float b;  /*variable*/
    char c;  /*variable*/

    printf("Enter values of a,b and c:\n");  /*prompt*/

    if(scanf("%d%f%c",&a,&b,&c)==3)
    {
        printf("\na = %d  b = %f  c = %c\n",a,b,c); /*showing result*/
    }
    else
    {
        printf("\nError in input.\n"); /*showing error result*/
    }

    return 0;
}  /*end of main function*/
