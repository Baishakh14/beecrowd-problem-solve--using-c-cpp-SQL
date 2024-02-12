#include<stdio.h>
int main()
{
   unsigned long long n;
   while(scanf("%llu",&n)&&n!=-1)
   {
     if(n==0) printf("%llu\n",n);
     else printf("%llu\n",n-1);
   }

    return 0;
}

