#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  b/=a;
  if(b>=c) printf("S\n");
  else printf("N\n");
    return 0;
}

