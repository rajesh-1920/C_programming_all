#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int i=0,vow=0,cons=0;
    printf("Enter a string : ");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
                str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            vow++;
        else
            cons++;
        i++;
    }
    printf("\nNumbers of vowels is = %d\n",vow);
    printf("Numbers of constant is = %d\n",cons);
}
