#include <stdio.h>
#include <stdlib.h>

int fun(int num1,int num2)
{
    int n1,n2,lcm,gcd,rem;
    n1=num1;
    n2=num2;
    while(n2!=0)
    {
        {
            rem=n1%n2;
            n1=n2;
            n2=rem;
        }
        gcd=n1;
        lcm=num1*num2/gcd;
        printf("%d is GCD\n",gcd);
        printf("%d is LCM\n",lcm);
    }
}

int main()
{
    int num1,num2;
    printf("Enter two number:");
    scanf("%d%d",&num1,&num2);
    fun(num1,num2);
}

