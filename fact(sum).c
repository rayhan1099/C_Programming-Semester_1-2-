#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n;
    double sum=0,fact=1;
    printf("Input the number:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(k=1; k<=i; k++)
        {
            fact=fact*k;
        }
        sum=sum+(i/fact);
        fact=1;
        printf("%.2f\n",sum);
    }
    printf("%.2f is Final sum\n",sum);
    return 0;
}
