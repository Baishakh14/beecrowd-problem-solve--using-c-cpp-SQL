#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a = 0;
    int b = 0;

    scanf("%d %d", &a, &b);
    int quotient = 0;
    int remainder = 0;

    for (int r = 0; r < abs(b); ++r)
    {
        int q = (a - r) / b;
        if (a == b * q + r)
        {
            quotient = q;
            remainder = r;
            break;
        }
    }
    printf("%d %d\n", quotient, remainder);
    return 0;
}
