/*display multiplication line*/
#include<stdio.h>

int main()/*start of min function*/
{
    int i,a=5,p; /*variable*/
    for(i=1;i<=10;i++) /*loop start*/
    {
        p=a*i; /*calculation*/
        printf("%d*%d=%d\n",a,i,p); /*result show*/
    }
    return 0;
}
