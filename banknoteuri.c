#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,i,j,l,p,q,s,t,r,a,b,c,d,n;
    scanf("%d",&n);
    k=n/100;
    i=n%100;
    j=i/50;
    l=i%50;
    p=l/20;
    q=l%20;
    s=q/10;
    t=q%10;
    r=q/5;
    a=q%5;
    b=a/2;
    c=a%2;
    d=c/1;
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",n,k,j,p,s,r,b,d);
    return 0;
}
