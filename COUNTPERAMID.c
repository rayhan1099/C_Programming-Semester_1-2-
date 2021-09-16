#include <stdio.h>
#include <stdlib.h>

int main()
{int n,i,j,prev=0;
    printf("Input lines:");    scanf("%d",&n);    for(i=1;i<=n;i++)    {        for(j=1;j<=i;j++)        {prev++;        printf("%5d ",prev);        }printf("\n");}
    return 0;
}
