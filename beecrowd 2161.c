#include<stdio.h>
int main()
{
double n;
scanf("%lf",&n);
double a = 0;
while(n--)
{
    a+=6;
    a = 1/a;
}
a+=3;
printf("%.10lf\n",a);
    return 0;
}

