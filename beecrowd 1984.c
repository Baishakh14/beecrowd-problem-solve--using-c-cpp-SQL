#include<stdio.h>
int main()
    {
      long long int n;
      int r;
      while(scanf("%lld",&n)!=EOF)
      {
          while(n){
          r = n % 10;
          n = n/10;
      printf("%lld",r);
          }
          printf("\n");
      }
        return 0;
    }
