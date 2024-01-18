#include<stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  int a,b;
  char c;
  scanf("%d %c %d",&a,&c,&b);
  if(c=='*') a*=b;
  if(c=='+') a+=b;
  if(a>t) printf("OVERFLOW\n");
  else printf("OK\n");

    return 0;
}

