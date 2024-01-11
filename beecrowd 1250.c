#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  while(n--)
  {
      int a;
      scanf("%d",&a);
      int b[a];
      char c[a];
      int co = 0;
      for(int i = 0;i<a;i++)
      {
          scanf("%d",&b[i]);
      }
          for(int i = 0;i<a;i++)
      {
          scanf(" %c",&c[i]);
      }
            for(int i = 0;i<a;i++)
      {
          if(b[i]<=2&&c[i]=='S') co++;
          else if(b[i]>2&&c[i]=='J') co++;
      }
      printf("%d\n",co);
  }


    return 0;
}

