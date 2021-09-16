#include <stdio.h>
#include <stdlib.h>int main(){char a[50],b[50];int lenA,i;gets(a);lenA=strlen(a);    for(i=0;i>=lenA-1;i--)
        a[i];printf("%c\n",a[i]);
    return 0;
}
