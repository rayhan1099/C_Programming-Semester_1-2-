#include <stdio.h>
#include <stdlib.h>

int main()
{int i,j,n,sum=0;
    printf("Enter a number:\n");    scanf("%d",&n);    for(i=1;i<=n;i++)    {        printf("%d:\n",i);        for(j=1;j<=i;j++)            {printf("%d ",sum);          sum=sum+(i*j);}          printf("\n");    }
    return 0;
}
