#include<math.h>
#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a = (int) log2(n);///no need typecasting
  int t = (int) pow(2,a)*pow(2,a);///no need typecasting
  printf("%d\n",t);
    return 0;
}

