#include<stdio.h>
int isprime(int a)
{
    if(a<=1) return 0;
    for(int i = 2;i<a;i++)
    {
        if(a%i==0) return 0;
    }
    return a;
}
int main()
{
   int n;
   scanf("%d",&n);
   int a[n];
   int  j = 0;
   for(int i = 0;i<=n;i++)
   {
       if(isprime(i))
       {
           a[j] = i;
           j++;
       }
   }
   for(int i = j-1;i>=0;i--)
   {
      // printf("%d\n",a[i]);
       if(a[i]-a[i-1]==2)
       {
           printf("%d %d\n",a[i-1],a[i]);
           return 0;
       }
   }

    return 0;
}


