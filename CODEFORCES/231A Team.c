/*calculate programming implement between three friends*/
#include<stdio.h>

int main()
{
    int n=0,p=0,v=0,t=0,a=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&p,&v,&t);
        if((p==1&&v==1)||(v==1&&t==1)||(p==1&&t==1)||(p==1&&v==1&&t==1))
        {
            a++;
        }
    }

    printf("%d\n",a);
    return 0;
}
