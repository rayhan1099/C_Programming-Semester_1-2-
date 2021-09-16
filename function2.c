#include <stdio.h>
#include <stdlib.h>
void fun(int*a,int*b)
{
    *b=*b-*a;
    *a=*a+*b;
    *b=*a-*b;

}

int main()
{ int p,q;
scanf("%d%d",&p,&q);
    printf("%d %d\n",p,q);
    fun(&p,&q);
    printf("%d %d\n",p,q);
}
