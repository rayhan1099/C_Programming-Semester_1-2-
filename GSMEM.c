#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k=1,a,b,c;
    scanf("%d%d%d%d",&i,&a,&j,&b);
    k=j-i;
    if(k<0)
    {
        k=24+(j-i);
    }
    {c=b-a;}
     if(c<0)
    {
        c=60+(b-a);
        k--;}
if(i==j && a==b)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
        {printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",k,c);}
    return 0;
}
