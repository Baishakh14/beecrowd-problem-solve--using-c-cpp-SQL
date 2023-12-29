#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  while(n--)
  {
      int m = 0,j = 0;
      int x,d;
      for(int i = 0;i<3;i++)
      {
          scanf("%d%d",&x,&d);
          j+=(x*d);
      }
            for(int i = 0;i<3;i++)
      {
          scanf("%d%d",&x,&d);
          m+=(x*d);
      }
      if(j>m) printf("JOAO\n");
      else printf("MARIA\n");
  }


    return 0;
}

