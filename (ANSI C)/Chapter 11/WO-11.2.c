#include<stdio.h>
struct personal
{
    char name[50],month[15];
    float salary;
    int day,year;
};
int main(void)
{
    struct personal p1;
    printf("Enter person name , joining date and salary in a row:\n");
    scanf("%s %d %s %d %f",p1.name,&p1.day,p1.month,&p1.year,&p1.salary);
    printf("\nOutput:\n");
    printf("%s %d %s %d %f\n",p1.name,p1.day,p1.month,p1.year,p1.salary);
}
