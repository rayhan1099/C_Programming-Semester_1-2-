#include <stdio.h>
#include <stdlib.h>

int main()
{
    static int p, q, r, t;
    while(scanf("%d %d %d", &p, &q, &r) == 3 && (p || q || r))
    {
        if(p >= q)
        {
            if(p > r)
            {
                t = p;
                p = r;
                r = t;
            }
        }
        else if(q > r)
        {
            t = q;
            q = r;
            r = t;
        }

        else if(p==q == r)
            printf("Equilateral Triangle\n");
        else if(p*p+q*q == r*r)
            printf("Isosceles Triangle\n");
            else
                printf("Bad Triangle")
    }
    return 0;
}
