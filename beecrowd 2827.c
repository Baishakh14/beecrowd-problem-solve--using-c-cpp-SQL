#include<stdio.h>
#include<math.h>
int main()
{
    unsigned n;
    scanf("%u",&n);
    while(n--)
    {
        unsigned a,b;
        scanf("%u%u",&a,&b);
        printf("%.f\n",floor(log10(pow(a,b)))+1);///floor for absoulanent value
    }

    return 0;
}
