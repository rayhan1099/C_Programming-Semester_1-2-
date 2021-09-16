#include <stdio.h>
#include <stdlib.h>
int myFunction(int a)
{
    int i,sum=0;
    for(i=1; i<=a; i++)
    {
        printf("%d\t",i);
        sum=sum+i;
    }
    return sum;
}
int main()
{int i,j;
scanf("%d%d",&i,&j);
    int k=myFunction(i);
    printf("\n sum is %d\n",k);
    k=myFunction(j);
    printf("\n sum is %d\n",k);
    return 0;
}
