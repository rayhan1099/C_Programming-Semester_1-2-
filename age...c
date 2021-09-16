#include <stdio.h>
#include <stdlib.h>

int main()
{int n;
    printf("Enter your age:");
    scanf("%d",&n);
    if(n<18)
    {
     printf("child");
    }
    else if(n>=18 && n<=40)
    {printf("young");
    }
    else
    {
      printf("Adult");
    }
    return 0;
}
