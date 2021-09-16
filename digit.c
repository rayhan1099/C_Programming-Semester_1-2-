#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    {
        printf("upper case=%c\n",ch+32);

    }
    else if(ch>='a'&&ch<='z')
    {
        printf("lower case=%c\n",ch-32);
    }
    else if(ch>='0'&&ch<='9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}
