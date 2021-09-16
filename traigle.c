#include <stdio.h>
#include <stdlib.h>

int main()
{float i,j,k;
    scanf("%f%f%f",&i,&j,&k);
    if(i<j+k&&j<i+k&&k<i+j)
        printf("Perimetro = %.1f\n",i+j+k);
    else{
        printf ("Area = %.1f\n",((i+j)*k)/2);
    }
    return 0;
}
