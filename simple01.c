#include <stdio.h>
#include <stdlib.h>

int main()
{int n,a,b,c,d,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    scanf("%d",&a);
    if(a>10)
    { b=a-10;
        c=10;
        printf("%d %d\n",a,c);
    }
        else {
            printf("%d %d\n",0,a);
        }
    }
return 0;
}
