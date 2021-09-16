#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100],i, b;
    gets(a);
    scanf("%c", &b);
    printf("%d\n", b);
    for(i=0; i<100; i++)
    {
        if(a[i]==32)
            a[i]=10;
    }
    puts(a);
    return 0;
}
