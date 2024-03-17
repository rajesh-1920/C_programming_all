#include<stdio.h>
struct invert
{
    char *name[30];
    int number;
    float price;
};
int main(void)
{
    struct invert product[3],*ptr;
    printf("INPUT\n");
    for(ptr=product; ptr<product+3; ptr++)
        scanf("%s %d %f",ptr->name,&ptr->number,&ptr->price);
    printf("\nOUTPUT\n");
    for(ptr=product; ptr<product+3; ptr++)
        printf("%-20s %5d %10.2f\n",ptr->name,ptr->number,ptr->price);
}
