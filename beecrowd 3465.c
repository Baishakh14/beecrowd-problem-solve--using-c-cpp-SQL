#include<stdio.h>
#include<math.h>
int main()
{
   int a,b,c; ///3 area of triangle
   scanf("%d%d%d",&a,&b,&c); /// p means perimeter of triangle
   double p = (double)(a+b+c)/2;/// use float or double no problem to typecaset.also not need it if use 2.0;mean a .0 after 2
   double ar = sqrt(p*(p-a)*(p-b)*(p-c)); ///find the area of triangle
   printf("%.3lf m2\n",ar);
    return 0;
}

