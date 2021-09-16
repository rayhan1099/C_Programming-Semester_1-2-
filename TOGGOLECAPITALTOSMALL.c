#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    int len, i;
    printf("Input any string: ");
    gets(a);
    len = strlen(a);
    printf("After Processing: ");
    for(i=len-1; i>=0; i--)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
        {
            printf("%c", a[i] + 32);
        }
        else if(a[i] >= 'a' && a[i] <= 'z')
        {
            printf("%c", a[i] - 32);
        }
        else
        {
            printf("%c", a[i]);
        }
    }
    return 0;
}



