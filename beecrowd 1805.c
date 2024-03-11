#include<stdio.h>
int main()
{
    unsigned long long a,b;
    scanf("%llu %llu",&a,&b);
    unsigned long long s = ((a+b)*(b-a+1))/2;
    printf("%llu\n",s);
    return 0;
}

