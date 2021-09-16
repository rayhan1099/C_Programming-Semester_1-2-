#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  a,b,c,r;
    while(scanf("%d %d",&a,&b)==2)
    {
        c=2*a;
        r=c*b;
        printf("%d\n",r);
    }
    return 0;
}
