#include<stdio.h>
int main()
{
   int a[] = {1,7,9,3};///powering from 0 to 9 these are the last digit of 7 power n
   int b;
   scanf("%d",&b);
   while(b--)
   {
       long long int n;
       scanf("%llu",&n);
       int m = n%4; ///find the index;
       printf("%d\n",a[m]);
   }
    return 0;
}
