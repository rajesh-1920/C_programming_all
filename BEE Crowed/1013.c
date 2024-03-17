/*beecrowd p-1013*/
/*greatest number*/

#include<stdio.h>
int main()
{
    int a,b,c,max;
    scanf("%d%d%d",&a,&b,&c);
    max=a;
    if(max<b)
    {
        max=b;
    }
    if(max<c)
    {
        max=c;
    }
    printf("%d eh o maior\n",max);
    return 0;
}
