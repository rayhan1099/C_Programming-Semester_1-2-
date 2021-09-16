#include <stdio.h>
#include <stdlib.h>

int main()
{int line,x,n;
    printf("Input number:");    scanf("%d",&n);    for(line=1;line<=n;line++)    {        for(x=1;x<=n-line;x++)        {printf("%d ",n-line+1);    }printf("\n");}
    return 0;
}
