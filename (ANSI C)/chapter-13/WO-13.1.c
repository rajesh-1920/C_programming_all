#include<stdio.h>
int main(void)
{
    FILE *f1;
    char c[40];
    printf("Input data\n");
    f1=fopen("first","w");
    gets(c);
    fprintf(f1,"%s",c);
    fclose(f1);
    printf("Output data\n");
    f1=fopen("first","r");
    fscanf(f1,"%c",&c);
    printf("%s",c);
    fclose(f1);
}
