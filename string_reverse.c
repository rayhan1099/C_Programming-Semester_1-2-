#include <stdio.h>
#include <stdlib.h>

int main()
{char a[20],b[20];int lenA,i,j=0; gets(a); lenA=strlen(a); for (i=lenA-1;i>=0;i--){           b[j]=a[i];           j++;}           b[j]=NULL;    printf("%s",b);

    return 0;
}
