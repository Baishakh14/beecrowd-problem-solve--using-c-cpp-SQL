#include<stdio.h>
int main()
{
      float c = 0;
  int n;
  scanf("%d",&n);
  while(n--)
  {
      int a,b;
      scanf("%d %d",&a,&b);
      c+=(float)a/b;
  }
   if(c>1) printf("FAIL\n");
   else printf("OK\n");

    return 0;
}

