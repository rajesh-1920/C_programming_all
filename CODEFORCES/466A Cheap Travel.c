#include<stdio.h>
int main(void)
{
    int n,m,a,b,sr,p1,p,h;
    float vs,vc;
    scanf("%d%d%d%d",&n,&m,&a,&b);
    sr=n/m;
    h=n;
    n=n-sr*m;
    p=sr*b+n*a;
    p1=(sr+1)*b;
    if(p1<p)
    {
        p=p1;
    }
    vc=(float)a/1.0;
    vs=(float)b/m;
    if(vs>vc)
    {
        p=h*a;
    }
    printf("%d\n",p);
}
