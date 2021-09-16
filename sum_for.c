#include <stdio.h>
#include <stdlib.h>
int main()
{int i,j,n;
    printf("enter number:\n");    scanf("%d",&n);    for(i=1;i<=n;i++)    {        printf("%d:\n",i);    for(j=1;j<=i;j++)    {        printf("%d ",j+i);    }printf("\n");}
    return 0;
}
