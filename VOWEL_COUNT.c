#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100],t;
    int v=0,i,lenA;
    gets(a);
    lenA=strlen(a);
    for(i=lenA; i>=0; i--)
    {
        t=a[i];
        if(t=='A'||t=='a'||t=='E'||t=='e'||t=='I'||t=='i'||t=='O'||t=='o'||t=='U'||t=='u')
            v++;
    }

    printf("%d",t);
    return 0;
}
