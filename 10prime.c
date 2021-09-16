#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,k,p,q,num;
    printf("Input 1st and last number: \n");
    scanf("%d %d",&p,&q);
    for(num=p; num<=q; num++)
    {
        k=0;
        for(j=1; j<=num; j++)
        {
            if(num%j==0)
            {
                k++;
            }
        }
        if(k==2)
            printf("%d is a prime number\n",num);
       else
            printf("%d is a not prime number\n",num);
    }
    return 0;
}
