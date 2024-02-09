#include<stdio.h>
#include<math.h>
int main()
{
  int n;
  while(scanf("%d",&n)!=EOF)
  {
      int c = 0;
      for(int i = 0;i<n;i++)
      {
          int x;
          scanf("%d",&x);
          if(x==1) c++;
      }
      float p = (n/3.0)*2;
      int ip = ceil(p);
      if(c>=ip) printf("impeachment\n");
      else printf("acusacao arquivada\n");
  }

    return 0;
}

