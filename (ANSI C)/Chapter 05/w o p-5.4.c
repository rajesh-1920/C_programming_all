/*W O p-5.4*/
/*various input formatting options for integers*/

#include<stdio.h>
int main()  /*start of main function*/
{
    int a,b,c,x,y,z; /*variable*/
    int p,q,r; /*variable*/

    printf("Enter three integers numbers:\n");  /*prompt*/
    scanf("%d%*d%d",&a,&b,&c); /*taking input*/
    printf("%d %d %d\n\n",a,b,c); /*showing result*/

    printf("Enter two 4-digit numbers:\n");  /*prompt*/
    scanf("%2d%d4",&x,&y); /*taking input*/
    printf("%d %d\n\n",x,y); /*showing result*/

    printf("Enter two integers:\n");  /*prompt*/
    scanf("%d%d",&a,&x); /*taking input*/
    printf("%d %d \n\n",a,x); /*showing result*/

    printf("Enter a nine digit number:\n");  /*prompt*/
    scanf("%3d%4d%3d",&p,&q,&r); /*taking input*/
    printf("%d %d %d\n\n",p,q,r); /*showing result*/

    printf("Enter two three digit numbers:\n");  /*prompt*/
    scanf("%d%d",&x,&y); /*taking input*/
    printf("%d %d \n\n",x,y); /*showing result*/

    return 0;
}  /*end of main function*/
