#include<stdio.h>
#include<math.h>
//#include<stdlib.h>
int main()
{
  int n,c,l;
  int v = 0;
  int b;
  scanf("%d %d %d",&n,&c,&l);
  int pa = 0,pb = 0;
  for(int i = 1;i<n;i++)
  {
      scanf("%d",&b);
      if(abs(c-b)<=l)
      {
          if(v) pb += abs(c-b);
          else pa += abs(c-b);
          c = b;
      }
      int ab;
      if(v==0) ab = 1;
      else      ///switching the value so that it can add value in both but in 1 by 1 way
        ab = 0;
        v = ab;
        ///v^=1; both works;
  }
   printf("%d %d\n",pa,pb);

    return 0;
}
