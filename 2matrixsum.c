#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r1,r2,c1,c2;
    printf("Input matrix daimension:\n");
    scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
    int i,j,k,A[r1][c1],B[r2][c2],result[r1][c1],sum=0;
    printf("Input data for 1st matrix:\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
            scanf("%d",&A[i][j]);
    }
    printf("input data for second matrix:\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
            scanf("%d",&B[i][j]);
    }
    printf("The sum is:\n");
    if(r1==r2&&c1==c2)
    {
        for(i=0; i<r2; i++)
        {
            for(j=0;j<c2;j++)
            {
                sum=sum+A[i][j]+B[i][j];
                result[i][j]=sum;
                    sum=0;
            }
        }

    }
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
            printf("%d ",result[i][j]);
        printf("\n");
    }
    return 0;
}
