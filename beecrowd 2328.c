#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int s = 0;
   for(int i = 0;i<n;i++)
   {
       int a;
       scanf("%d",&a);
       s+=a;
   }
   printf("%d\n",s-n);
    return 0;
}

