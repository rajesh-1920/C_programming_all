#include<stdio.h>
struct class
{
    int number;
    char name[50];
    float marks;
};
int main(void)
{
    int i;
    struct class st1={111,"Rao",72.50};
    struct class st2={222,"Reddy",67.50};
    struct class st3;
    st3=st2;
    i=((st3.number==st2.number)&&(st3.marks==st2.marks))?1:0;
    if(i==1)
    {
        printf("st2 and st3 are same\n");
        printf("%d  %s  %f\n",st3.number,st3.name,st3.marks);
    }
    else
        printf("st2 and st3 are different\n");
}
