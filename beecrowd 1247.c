#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c;
  while(scanf("%d %d %d",&a,&b,&c)!=EOF)
  {
      double tdr = sqrt(144+(a*a));
      double tt = 12.0/b;
      double tg = tdr/c;
      if(tt>=tg) printf("S\n");
      else printf("N\n");
  }


    return 0;
}

