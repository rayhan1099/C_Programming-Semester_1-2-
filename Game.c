#include <stdio.h>
#include <stdlib.h>

int main()
{int a,b,i,j;
scanf("%d%d",&a,&b);
i=b-a;
if(i<0){
    i=24+i;
}
if(a==b)
{printf("O JOGO DUROU 24 HORA(S)\n");

}
else{
    printf("O JOGO DUROU %d HORA(S)\n",i);}
    return 0;
}
