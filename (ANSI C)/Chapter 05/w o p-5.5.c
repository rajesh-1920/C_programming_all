/*W O p-5.5*/
/*reading of real number*/

#include<stdio.h>
int main()  /*start of main function*/
{
    float x,y;  /*variable*/
    double p,q;  /*variable*/

    printf("Values of x and y:");  /*prompt*/
    scanf("%f%e",&x,&y); /*taking input*/
    printf("\nx = %f\ny = %f\n\n",x,y); /*showing result*/

    printf("Values of p and q:");  /*prompt*/
    scanf("%lf%lf",&p,&q); /*taking input*/
    printf("p = %.12lf\nq = %.12e\n\n",p,q); /*showing result*/

    return 0;
}  /*end of main function*/
