/*beecrowd p-1012*/
/*area calculation*/

#include<stdio.h>
int main()
{
    double A=0,B=0,C=0,pi=3.14159;
    scanf("%lf%lf%lf",&A,&B,&C);
    double s=pi*C*C;
    double p=(0.5*(A+B)*C);
    printf("TRIANGULO: %.3lf\n",0.5*A*C);
    printf("CIRCULO: %.3lf\n",s);
    printf("TRAPEZIO: %.3lf\n",p);
    printf("QUADRADO: %.3lf\n",B*B);
    printf("RETANGULO: %.3lf\n",A*B);
    return 0;
}

