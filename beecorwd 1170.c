#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   while(n--)
   {
       double a;
       scanf("%lf",&a);
       int c = 0;
       while(a>1)
       {
           c++;
           a/=2;
       }
       printf("%d dias\n",c);
   }


    return 0;
}

