#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n;
    scanf("%lf",&n);
    if(n>=0&&25>=n)
    {
        printf("Intervalo [0,25]\n");
    }
    else if(n>25&&50>=n)
    {
        printf("Intervalo (25,50]\n");
    }
    else if(n>50&&75>=n)
    {
        printf("Intervalo (50,75]\n");
    }
    else if(n>75&&100>=n)
    {
        printf("Intervalo (75,100]\n");
    }
    else
    {
        printf("Fora de intervalo\n");
    }


    return 0;
}
