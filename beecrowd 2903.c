#include<stdio.h>
int gcd(int a,int b)
{
    while(b!=0)
    {
        int t = b;
        b = a%b;
        a = t;
    }
    return a;
}
int main()
{
   int a,b;
   scanf("%d.%d",&a,&b);
   int x = (100*a)+b;
   int r = 36000/gcd(36000,x);
   printf("%d\n",r);

    return 0;
}
//   int a,b;
//   scanf("%d.%d",&a,&b);
//   int x = (100*a)+b;
//   int r = 36000/gcd(36000,x);
//   printf("%d\n",r);

