#include <stdio.h>
#include <stdlib.h>

int main()
{
    int R1,R2,C1,C2,k;
    printf("Enter Matrix dimension Matrix1 and Matrix2:");
    scanf("%d%d%d%d",&R1,&C1,&R2,&C2);
    while(C1!=R2)
    {
        printf("wrong dimension enter again:\n");
        scanf("%d%d%d%d",&R1,&C1,&R2,&C2);
    }
    int A[R1][C1],B[R2][C2],Result[R1][C2],sum=0;
    printf("Enter data for 1st matrix:\n");
    int i,j;
    for(i=0; i<R1; i++)
    {
        for(j=0; j<C1; j++)
            scanf("%d",&A[i][j]);
    }
    printf("Enter data for 2nd matrix:\n");

    for(i=0; i<R2; i++)
    {
        for(j=0; j<C2; j++)
            scanf("%d",&B[i][j]);
    }
    for(i=0; i<R1; i++)
    {
        for(j=0; j<C2; j++)
        {
            sum=0;
            for(k=0; k<C1; k++)
            {
                sum=sum+A[i][k]*B[k][j];
            }

            Result[i][j]=sum;
            sum=0;

        }

    }

for(i=0; i<R1; i++)
{
    for(j=0; j<C2; j++)
        printf("%d ", Result[i][j]);
    printf("\n");}

    return 0;
}
