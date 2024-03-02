#include<stdio.h>
#include<math.h>
int main()
{
   int n;
   scanf("%d",&n);
   while(n--)
   {
         int a,b;
         scanf("%d %d",&a,&b);
         int x = floor(sqrt(b))-ceil(sqrt(a))+1;
         printf("%d\n",x);
   }
    return 0;
}

