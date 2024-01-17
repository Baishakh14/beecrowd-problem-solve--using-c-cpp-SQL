#include<stdio.h>
int main()
{
   long long int a;
   scanf("%lld",&a);
   int n,c = 0;
   scanf("%d",&n);
   for(int i = 0;i<n;i++)
   {
       int b;
       scanf("%d",&b);
       b = b*a;
       if(b>=40000000) c++;
   }
   printf("%d\n",c);
    return 0;
}

