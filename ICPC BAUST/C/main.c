#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,j,k,p,q,r,t;
    scanf("%d%d%d%d",&a,&b,&j,&k);
    if(b*j>k)
    {
        t = (a%b)*j;
        if(t>k)
        {
           p=a/b*k + k;
           printf("%d",p);
        }
        else
        {
           q=a/b *k +t;
           printf("%d",q);
        }
    }
    else
    {
        r=a*j;
        printf("%d",r);
    }
}
