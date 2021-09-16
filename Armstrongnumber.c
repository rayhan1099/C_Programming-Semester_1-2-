#include <stdio.h>
#include <stdlib.h>

int main()
{int x,j,sum,tem,y,
count=0,i;
int vary[count];
scanf("%d",&x);
for(j=x;j>0;j=j/10)
{
    tem=j%10;
    y=(pow(tem,3));
    vary[count]=tem;
    sum=sum+y;
    count++;
}if(sum==x)
{printf("%d is an Armstrong number because",x);
for(i=(count-1);i>=0;i--)
{
    printf("%d%d",vary[i],3);
    if(i>0)
        printf("+");

}printf("=%d",sum);
}
    return 0;
}
