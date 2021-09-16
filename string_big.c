#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[50],b[50],c[50];
    int lenA,lenB,i;
    gets(a);
    gets(b);
    lenA=strlen(a);
    lenB=strlen(b);
    if(lenA>lenB)
    {
        for(i=0; i<=lenA; i++)
            c[i]=a[i];

    }
    else
    {
        for(i=0; i<=lenB; i++)
            c[i]=b[i];

    }
    printf("%s",c);
    return 0;
}

