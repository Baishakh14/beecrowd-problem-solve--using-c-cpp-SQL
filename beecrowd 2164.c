#include<stdio.h>
#include<math.h>
int main()
{
  double a;
  scanf("%lf",&a);
  double x,y;
  x = (1+sqrt(5))/2;
  y = (1-sqrt(5))/2;
 double f = (pow(x,a)-pow(y,a))/sqrt(5);
  printf("%.1lf\n",f);
    return 0;
}

