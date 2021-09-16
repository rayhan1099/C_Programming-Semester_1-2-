#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,q;
    float r,i,j,k,l;
    scanf("%d%d",&p,&q);
    if(p==1)
    {
        i=q*4.00;
        printf("Total: R$ %.2f\n",i);
    }
    if(p==2)
    {
        j=q*4.50;
        printf("Total: R$ %.2f\n",j);
    }
    if(p==3)
    {
        k=q*5.00;
        printf("Total: R$ %.2f\n",k);
    }
    if(p==4)
    {
        l=q*2.00;
        printf("Total: R$ %.2f\n",l);
    }
    if(p==5)
    {
        r=q*1.50;
        printf("Total: R$ %.2f\n",r);
    }
    return 0;
}
