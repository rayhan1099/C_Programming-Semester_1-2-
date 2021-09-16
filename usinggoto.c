#include <stdio.h>

int main()
{
    int number, number_1, number_2, number_3;

    scanf("%d", &number);

    number_1 = number/3;

    if(number_1 == 1)
    {
        number_2 = (number - number_1)/2;
        if(number_2 == 1)
        {
            number_3 = number - (number_1+number_2);
        }
        else
        {
            number_3 = number_2;
        }
    }
    else
    {
        number_2 = number_1;
        number_3 = number - (number_1+number_2);
    }
recheck:
    if(number_1%3 == 0 || number_2%3 == 0 || number_3%3 == 0 )
    {
        number_1--;
        number_2 = number_1;
        number_3 = number - (number_1+number_2);
        if((number_1%3 == 0 && number_1 != 1) || (number_2%3 == 0 && number_1 != 1) || (number_3%3 == 0 && number_1 != 1) )
        {
            goto recheck;
        }
        printf("%d %d %d\n", number_1, number_2, number_3);}
        return 0;
    }
