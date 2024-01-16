#include<stdio.h>
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  int l = b;
  int n;
  for(int i = 0;i<a;i++)
  {
      scanf("%d",&n);
      b+=n;
      if(b<l) ///if sum is lower than l than l is the lower number;
      {
          l = b;
      }
  }
    printf("%d\n",l);
    return 0;
}

