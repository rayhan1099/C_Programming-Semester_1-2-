#include <stdio.h>
#include <stdlib.h>

int main()
{int i,j,k,p,q,r,sum=0;
    printf("Input started number of A.P series: \n");
    scanf("%d",&i);
    printf("Input range of A.P series: \n");
    scanf("%d",&j);
    printf("Input the common difference: \n");
    scanf("%d",&k);
    printf("The sum of the A.P series: \n");
    for(p=i;p<=j*k;p=p+k)
{
    sum=sum+p;

    printf("%d ",p);
    if(p!=j*k-(k-1))
    {
        printf("+ ");
    }

}
printf("= %d",sum);

    return 0;
}
