#include<stdio.h>
int main()
{
    char n1[110],n2[110],i=0;
    scanf("%s",&n1);
    scanf("%s",&n2);

    while(n1[i]!='\0')
    {
        if(n1[i]==n2[i])
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    i++;
    }

    return 0;
}
