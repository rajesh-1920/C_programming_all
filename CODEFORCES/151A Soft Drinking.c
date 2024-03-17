#include<stdio.h>
int main(void)
{
    int n,k,l,c,d,p,nl,np,td,ts,tl,f;
    scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);
    td=k*l/nl;
    tl=c*d;
    ts=p/np;
    if(td<=tl&&td<=ts)
    {
        f=td;
    }
    else if(tl<=td&&tl<=ts)
    {
        f=tl;
    }
    else if(ts<=td&&ts<=tl)
    {
        f=ts;
    }
    printf("%d\n",f/n);
}
