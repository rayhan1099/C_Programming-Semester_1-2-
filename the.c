#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,sum=0,n1,n2,n3;
printf("Input The Starting Number of AP:");
scanf("%d",&n1);
printf("Input the Number of Items:");
scanf("%d",&n2);
printf("Input the Common Defference:");
scanf("%d",&n3);
printf("The sum of AP series is: ");
for(i=n1;i<=n2*n3;i=i+n3)
{
    sum=sum+i;

    printf("%d ",i);
    if(i!=n2*n3-(n3-1))
    {
        printf("+");
    }

}
printf("= %d",sum);
    return 0;
}
