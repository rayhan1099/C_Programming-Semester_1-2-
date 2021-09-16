#include <stdio.h>
#include <stdlib.h>

int main()
{int i,j,k;
for(i=1;i<=50;i++)
{
     for(j=50;j>=i;j--)
          printf(" ");
     for(k=1;k<=i;k++)
          printf("* ");
     printf("\n");
}

    return 0;
}
