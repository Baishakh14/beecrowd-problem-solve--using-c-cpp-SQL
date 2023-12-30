//2896 - Enjoy the Offer
#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);///test case
  while(n--)
  {
      int x,y,i;
      scanf("%d%d",&x,&y); ///x is number of bottle, y is number of bottle can wxchange and get 1
      int c = 0;
      for( i = x;i>=y;i=i-y)
      {
         c++;
      }
      printf("%d\n",c+i);///total bottle in next day
  }

    return 0;
}

