#include<stdio.h>
int main(void)
{
    int months,days;
    printf("Enter days\n");
    scanf("%d",&days);
    months=days/30;
    days=days%30;
    printf("Months = %d Days = %d\n",months,days);
}
