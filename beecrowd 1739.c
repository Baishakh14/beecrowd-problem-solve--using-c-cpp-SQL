#include<stdio.h>
#include<stdbool.h>
bool o(unsigned long long a)
{
    while(a>0)
    {
        if(a%10==3) return true;
        a/=10;
    }
    return false;
}
int main()
{
        int i;
       unsigned long long f[1000];
        f[0] = 0;
        f[1] = 1;
        for(i = 2;i<1000;i++)
        {
            f[i] = f[i-1]+f[i-2];
        }
    int n;
    while(scanf("%d",&n)!=EOF)
    {
       for(i = 2;i<1000;i++)
       {
           if(o(f[i])||f[i]%3==0)
           {
               n--;
           }
           if(n==0) break;
       }
       printf("%llu\n",f[i]);
    }
    return 0;
}

