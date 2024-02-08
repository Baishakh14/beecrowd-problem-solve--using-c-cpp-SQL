#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool isprime(int a)
{
    if(a<=1) return false;
    int s = sqrt(a);
    for(int i = 2;i<=s;i++)
    {
        if(a%i==0) return false;
    }
    return true;
}
int main()
{
   int n;
   while(scanf("%d",&n)!=EOF)
   {
       int a[n];
       for(int i = 0;i<n;i++)
       {
           scanf("%d",&a[i]);
       }
       int t;
       int s = 0;
       scanf("%d",&t);
       for(int i = n-1;i>=0;i-=t)
       {
           s+=a[i];
       }
       if(isprime(s)) printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
       else printf("Bad boy! I’ll hit you.\n");
   }
    return 0;
}

