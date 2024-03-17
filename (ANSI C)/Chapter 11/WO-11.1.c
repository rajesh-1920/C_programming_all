#include<stdio.h>
struct complex
{
    double real,img;
};
struct complex add(struct complex c1,struct complex c2)
{
    struct complex c3;
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    return c3;
}
struct complex product(struct complex c1,struct complex c2)
{
    struct complex c3;
    c3.real=c1.real*c2.real;
    c3.img=c1.img*c2.img;
    return c3;
}
int main(void)
{
    struct complex n1,n2,res;
    n1.real=10;
    n1.img=5;
    n2.real=20;
    n2.img=30;
    res=add(n1,n2);
    printf("%lf  %lf\n",res.real,res.img);
    res=product(n1,n2);
    printf("%lf  %lf\n",res.real,res.img);
}
