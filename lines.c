#include <stdio.h>
#include <stdlib.h>

int main()
{int n,line,j,prev=0;
    printf("How many lines?");    scanf("%d",&n);    for(line=1;line<=n;line++)    {        for(j=1;j<=line;j++)        {            prev++;            printf("%d\t",prev);    }printf("\n");}
    return 0;
}
