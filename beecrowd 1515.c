#include<stdio.h>
#include<string.h>
int main()
{
  int n;
  while(scanf("%d",&n)&&n)
  {
      int t = 10000;
      char a[1000],an[1000];
      int b,c;
      while(n--)
      {
          scanf("%s %d %d",a,&b,&c);
          int d = b-c;
          if(d<t)
          {
              t = d;
              strcpy(an,a);
          }
      }
      printf("%s\n",an);
  }

    return 0;
}

