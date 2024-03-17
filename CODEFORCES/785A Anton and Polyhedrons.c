#include<stdio.h>
#include<string.h>
int main(void)
{
    long long int n,t=0,i;
    char a[]={"Tetrahedron"},b[]={"Cube"},c[]={"Octahedron"},d[]={"Dodecahedron"},e[]={"Icosahedron"},s[20];
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",s);
        if(strcmp(s,a)==0){t=t+4;}
        else if(strcmp(s,b)==0){t=t+6;}
        else if(strcmp(s,c)==0){t=t+8;}
        else if(strcmp(s,d)==0){t=t+12;}
        else if(strcmp(s,e)==0){t=t+20;}
    }
    printf("%lld\n",t);
}
