#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   while(n--)
   {
       int a,b;
       scanf("%d %d",&a,&b);
       a = a/3;
       b = b/3;
       printf("%d\n",a*b);
   }

    return 0;
}
