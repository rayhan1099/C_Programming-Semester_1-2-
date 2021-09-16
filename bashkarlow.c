#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float a,b,c,x,y;
    scanf("%f%f%f",&a,&b,&c);
    if(a==0||(pow(b,2)-(4*a*c))<0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        x=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
        printf("R1 = %.5f\n",x);
        y=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
        printf("R2 = %.5f\n",y);
    }

    return 0;
}
