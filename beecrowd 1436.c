#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  for(int i = 1;i<=n;i++)
  {
      int a,d;
      scanf("%d",&a);
      int ab[a];
      for(int i = 0;i<a;i++)
      {
          scanf("%d",&ab[i]);
      }
      d = (a/2);
      printf("Case %d: %d\n",i,ab[d]);
  }

    return 0;
}

