#include <stdio.h>
#include <stdlib.h>

int main()
{int a;
while(1){
    scanf("%d",&a);
    if(a!=42)
        printf("%d\n",a);
    else
        break;
}
    return 0;
}
