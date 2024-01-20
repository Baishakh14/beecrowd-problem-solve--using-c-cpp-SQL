#include<stdio.h>
int main()
{
  int a,b;
  while(scanf("%d %d",&a,&b)!=EOF)
  {
      int s[a];
      int i = 0;
      int t = 0;
      while(b>0)
      {
          s[i] = b%10;
          b = b/10;
          i++;
      }
      for(int j = 0;j<i;j++)
      {
          t+=s[j];
      }
      printf("%d ",t);
      if(t%3==0) printf("sim\n");
      else printf("nao\n");
  }

    return 0;
}

