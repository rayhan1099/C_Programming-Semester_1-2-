#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,i,j;
    printf("Input daimention:");
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            scanf("%d",&a[i][j]);
    }
    int sum=0;
    for(j=0; j<c; j++)
    {
        sum=sum+a[0][j];
    }
    for(j=0; j<c; j++)
    {
        sum=sum+a[r-1][j];

    }
    for(i=1; i<r-1; i++)
        sum=sum+a[i][0];

    for(i=1; i<r-1; i++)
        sum=sum+a[i][c-1];

    printf("Border = %d", sum);
    return 0;
}

