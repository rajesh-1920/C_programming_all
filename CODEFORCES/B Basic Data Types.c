#include<stdio.h>
#include<string.h>
int main(void)
{
    int i;
    long long int l;
    char c;
    float f;
    double d;
    scanf("%d%lld",&i,&l);
    scanf("%c",&c);
    scanf("%f%lf",&f,&d);
    printf("%d\n%lld\n%c\n%f\n%lf\n",i,l,c,f,d);
}
