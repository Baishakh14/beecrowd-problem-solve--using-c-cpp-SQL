#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        unsigned long long a;
        scanf("%llu",&a);
        printf("%llu kg\n",(unsigned long long)(pow(2,a)/12)/1000);
    }
    return 0;
}

