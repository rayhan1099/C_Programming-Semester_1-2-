#include <stdio.h>
#include <stdlib.h>

int main()
{int line,sp,x,n;
    printf("Enter pyramid size:");    scanf("%d",&n);    for(line=1;line<=n;line++)    {        for(sp=1;sp<=(n-line);sp++)        {            printf(" ");        }for(x=1;x<=line;x++)        {            printf("%d ",x);        }printf("\n");    }
    return 0;
}
