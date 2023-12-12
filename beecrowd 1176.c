#include<stdio.h>
int main()
{
  long long int n[61];
  n[0] = 0;
  n[1] = 1;
  for(int i = 2;i<=61;i++)
  {
      n[i] = n[i-1]+n[i-2];
  }
  int a;
  int k;
  scanf("%d",&a);
  for(int j = 0;j<a;j++)
  {
      scanf("%d",&k);
      printf("Fib(%d) = %lld\n",k,n[k]);
  }

    return 0;
}

