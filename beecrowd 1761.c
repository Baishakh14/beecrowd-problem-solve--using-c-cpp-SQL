#include<stdio.h>
#include<math.h>
int main()
{
  double a,b,c;
   double x = 3.141592654/180;
   while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
   {
       double ans = 5*((tan(x*a)*b)+c);
       printf("%.2lf\n",ans);
   }
    return 0;
}

