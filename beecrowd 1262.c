#include<stdio.h>
#include<string.h>
int main()
{
  char a[51];
  while(scanf("%s",a)!=EOF)
  {
      int c = 0;
      int i = 0;
      int d;
      scanf("%d",&d);
      int l = strlen(a);
      while(i<l)
      {
      if(a[i]=='W')
      {
          c++;
          i++;
      }
      else
      {
          int rc = 0;
          while(rc<d&&a[i]=='R')
          {
             rc++;
             i++;
          }
          c++;

      }
      }
      printf("%d\n",c);

  }


    return 0;
}

