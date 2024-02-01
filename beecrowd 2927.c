#include<stdio.h>
int main()
{
   double a,b,c,d;
   scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
   double k = b-(c+d);
   if(k>=a+1) printf("Igor feliz!\n");
   else if(c>d/2) printf("Caio, a culpa eh sua!\n");
   else printf("Igor bolado!\n");

    return 0;
}

