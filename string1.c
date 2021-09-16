#include <stdio.h>#include <stdlib.h>int main(){    char a[50],b;
    int i;
    gets(a);
    strlen(a);
    for(i=0;i<=strlen(a);i++)
    {
        printf("%c",a[i]);
        if(a[i]==' ')
    printf("\n");
    }    puts(a[i]);    return 0;}