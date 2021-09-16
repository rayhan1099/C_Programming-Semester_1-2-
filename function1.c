#include <stdio.h>
#include <stdlib.h>
int fact(int n)

{
    int i,sum=1;
    for(i=n;i>=1;i--){
    sum=sum*i;}

}

int main()
{int result,i;
scanf("%d",&i);
result=fact(i);
printf("fact is %d\n",result);

}
