#include<stdio.h>
int main()
{
    int a,b,c,i=0,r[50],max;
    scanf("%d%d%d",&a,&b,&c);
    r[0]=a+b+c;
    r[1]=a*b*c;
    r[2]=a+b*c;
    r[3]=(a+b)*c;
    r[4]=a*b+c;
    r[5]=a*(b+c);
    max=r[0];
    while(i<=5)
    {

        if(max<r[i])
        {
            max=r[i];
        }
        i++;
    }
    printf("%d\n",max);
    return 0;
}
