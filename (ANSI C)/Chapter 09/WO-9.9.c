#include<stdio.h>
#include<string.h>
int main()
{
    char s1[40],s2[40],s3[40];
    int x,l1,l2,l3;
    printf("Enter two string constant : \n?");
    scanf("%s%s",s1,s2);
    x=strcmp(s1,s2);
    if(x==0)
        printf("\nStrings are equal\n");
    else
    {
        printf("\nStrings are not equal\n");
        strcat(s1,s2);
    }
    strcpy(s3,s1);
    l1=strlen(s1);
    l2=strlen(s2);
    l3=strlen(s3);
    printf("s1 = %s\t length = %d\n",s1,l1);
    printf("s2 = %s\t length = %d\n",s2,l2);
    printf("s3 = %s\t length = %d\n",s3,l3);
}
