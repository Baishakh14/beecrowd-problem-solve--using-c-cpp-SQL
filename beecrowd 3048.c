#include<stdio.h>
int main()
{
   int a,b = 0,t = 0;
   scanf("%d",&a);
   for(int i = 0;i<a;i++)
   {
       int n;
       scanf("%d",&n);
       if(n!=b)
       {
           t++;
       }
       b = n;
   }
   printf("%d\n",t);
    return 0;
}

