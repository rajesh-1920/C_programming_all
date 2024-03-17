#include<stdio.h>
int main()
{
    char s1[110];
    int i1=0,t1=0,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    scanf("%s",s1);
    a=b=c=d=e=f=g=h=i=j=k=l=m=n=o=p=q=r=s=t=u=v=w=x=y=z=0;
    while(1)
    {
        if(s1[i1]=='\0')
        {
            break;
        }
        else if(s1[i1]=='a' && a==0)
        {
            a++;
        }
        else if(s1[i1]=='b' && b==0)
        {
            b++;
        }
        else if(s1[i1]=='c' && c==0)
        {
            c++;
        }
        else if(s1[i1]=='d' && d==0)
        {
            d++;
        }
        else if(s1[i1]=='e' && e==0)
        {
            e++;
        }
        else if(s1[i1]=='f' && f==0)
        {
            f++;
        }
        else if(s1[i1]=='g' && g==0)
        {
            g++;
        }
        else if(s1[i1]=='h' && h==0)
        {
            h++;
        }
        else if(s1[i1]=='i' && i==0)
        {
            i++;
        }
        else if(s1[i1]=='j' && j==0)
        {
            j++;
        }
        else if(s1[i1]=='k' && k==0)
        {
            k++;
        }
        else if(s1[i1]=='l' && l==0)
        {
            l++;
        }
        else if(s1[i1]=='m' && m==0)
        {
            m++;
        }
        else if(s1[i1]=='n' && n==0)
        {
            n++;
        }
        else if(s1[i1]=='o' && o==0)
        {
            o++;
        }
        else if(s1[i1]=='p' && p==0)
        {
            p++;
        }
        else if(s1[i1]=='q' && q==0)
        {
            q++;
        }
        else if(s1[i1]=='r' && r==0)
        {
            r++;
        }
        else if(s1[i1]=='s' && s==0)
        {
            s++;
        }
        else if(s1[i1]=='t' && t==0)
        {
            t++;
        }
        else if(s1[i1]=='u' && u==0)
        {
            u++;
        }
        else if(s1[i1]=='v' && v==0)
        {
            v++;
        }
        else if(s1[i1]=='w' && w==0)
        {
            w++;
        }
        else if(s1[i1]=='x' && x==0)
        {
            x++;
        }
        else if(s1[i1]=='y' && y==0)
        {
            y++;
        }
        else if(s1[i1]=='z' && z==0)
        {
            z++;
        }
        i1++;
    }
    t1=(a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z);
    if(t1%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
    return 0;
}
