#include <stdio.h>
#include <stdlib.h>

int main()
{int i,j,n,k;
printf("Input pyramid size: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
     for(j=1;j<=n-i;j++)
          printf(" ");
     for(k=1;k<=i;k++)
          printf("* ");
     printf("\n");
}

    return 0;
}
