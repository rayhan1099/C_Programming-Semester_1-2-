#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int a,b,c,major;
    scanf("%d%d%d",&a,&b,&c);
    major=(a+b+abs(a-b))/2;
    major=(major+c+abs(major-c))/2;
    printf("%d eh o maior\n", major);
    return 0;
}
