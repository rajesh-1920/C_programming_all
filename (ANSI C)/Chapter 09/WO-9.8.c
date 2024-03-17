#include<stdio.h>
int main()
{
    int i,j,k;
    char name[30];
    char first_name[]="VISWANATH";
    char second_name[]="PRATAP";
    char last_name[]="SING";
    for(i=0; first_name[i]!='\0'; i++)
        name[i]=first_name[i];
    name[i]=' ';
    for(j=0; second_name[j]!='\0'; j++)
        name[j+1+i]=second_name[j];
    name[j+1+i]=' ';
    for(k=0; last_name[k]!='\0'; k++)
        name[j+2+i+k]=last_name[k];
    name[j+2+i+k]='\0';
    printf("\n%s\n",name);
}
