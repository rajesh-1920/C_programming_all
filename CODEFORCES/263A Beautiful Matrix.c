#include<stdio.h>
int main()
{
    int r,c,tr,tc,m[10][10],cr,cc;
    for(r=0; r<5; r++)
    {
        for(c=0; c<5; c++)
        {
            scanf("%d",&m[r][c]);
            if(m[r][c]==1)
            {
                tr=r;
                tc=c;
            }
        }
    }

    if(tr==4)
    {
        cr=2;
    }
    else if(tr==3)
    {
        cr=1;
    }
    else if(tr==2)
    {
        cr=0;
    }
    else if(tr==1)
    {
        cr=1;
    }
    else if(tr==0)
    {
        cr=2;
    }

    if(tc==4)
    {
        cc=2;
    }
    else if(tc==3)
    {
        cc=1;
    }
    else if(tc==2)
    {
        cc=0;
    }
    else if(tc==1)
    {
        cc=1;
    }
    else if(tc==0)
    {
        cc=2;
    }

    printf("%d\n",(cc+cr));

    return 0;
}
