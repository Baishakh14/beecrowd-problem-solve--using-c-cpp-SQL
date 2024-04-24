#include<stdio.h>
#include<math.h>
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  int ab[a];
  for(int i = 0;i<a;i++)
  {
      scanf("%d",&ab[i]);
  }
  int s = 0;
  int t;
  for(int i = 0;i<a;i++)
  {
      t = b - ab[i];
      s+=abs(t);
      ab[i+1]+=t;
  }
    printf("%d\n",s);
    return 0;
}

