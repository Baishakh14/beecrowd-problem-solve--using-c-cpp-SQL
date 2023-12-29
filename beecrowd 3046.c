#include<stdio.h>
int num();
int main()
{
  int n;
  scanf("%d",&n);
  printf("%d\n",num(n));
    return 0;
}
int num(int n)
{
    return ((n+1)*(n+2))/2;
}

