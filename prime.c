#include <stdio.h>
#include <stdlib.h>

int main()
{int j,k=0,n;
    printf("Input a number:");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
         if(n%j==0){
          k++;
         }
    }
    if(k==2)
    {printf("prime number\n");}
     else
     {printf("Not prime number\n");}
    return 0;
}
