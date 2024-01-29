
///1221 - Fast Prime Number
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool isprime(long long int a)
{
    //int c = 0;
    for(int i = 2;i<sqrt(a);i++) ///sqrt for short the time
    {
        if(a%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
   int n;
   scanf("%d",&n);
   while(n--)
   {
    long long int a;
       scanf("%lld",&a);
       if(isprime(a)) {
        printf("Prime\n");
       }
       else printf("Not Prime\n");
   }
    return 0;
}

