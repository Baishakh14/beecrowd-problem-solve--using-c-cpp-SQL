#include<stdio.h>
#include<math.h>
int main()
{
  long long int a,b;
  while(scanf("%lld %lld",&a,&b)!=EOF)
  {
      if(b>a)
      {
          a+=b;
//          printf("%d\n",a);
          b = a-b;
//          printf("%d\n",b);
          a = a-b;
//          printf("%d\n",a);
      }
      printf("%lld\n",a-b);
  }

    return 0;
}

