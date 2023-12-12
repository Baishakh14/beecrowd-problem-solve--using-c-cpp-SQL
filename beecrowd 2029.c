#include<stdio.h>
int main()
{
    double a,b;
    double p = 3.14;
   while(scanf("%lf %lf",&a,&b)!=EOF)
   {
       double r = b/2;
       double ar = p*r*r;
       double h = a/ar;
       printf("ALTURA = %.2lf\n",h);
       printf("AREA = %.2lf\n",ar);
   }

    return 0;
}

