/*p-4.20*/
/*checking a triangle is isosceles or not*/

#include<stdio.h>
int main() /*start of main function*/
{
    int n1,n2,n3; /*variable*/

    printf("Input the length of the sides of the triangle:\n"); /*prompt*/
    scanf("%d%d%d",&n1,&n2,&n3); /*taking length of sides*/

    if((n1+n2>n3)||(n1+n3>n2)||(n2+n3>n1)) /*condition for triangle*/
    {
        if((n1==n2&&n1!=n3)||(n2!=n1&&n2==n3)||(n3==n1&&n3!=n2)) /*condition for isosceles*/
        {
            printf("It is an isosceles triangle\n");
        }
        else
        {
            printf("It is not an isosceles triangle\n"); /*showing result*/
        }
    }
    else
    {
        printf("It is not a triangle\n");
    }

    return 0;
}  /*end of main function*/
