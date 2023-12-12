#include<stdio.h>
int main()
{
  int a,b;
  int n = 0;
  scanf("%d",&a);
  while(1)
  {
      scanf("%d",&b);
      if(b>0)
      {
          break;
      }
  }
  for(int i = 0;i<b;i++)
  {
      n = n+a;
      a++;
  }
  printf("%d\n",n);
    return 0;
}

