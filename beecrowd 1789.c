
#include<stdio.h>
int main()
{
  int t;
  while(scanf("%d",&t)!=EOF)
  {
      int n;
      int c;
      int m = 0;
      int a;
      for(a = 0;a<t;a++)
      {
          scanf("%d",&n);
          if(n>m)
          {
              m = n;
          }
          if(m<10)
          {
              c=1;
          }
                    if(m>=10&&m<20)
          {
              c=2;
          }
                    if(m>=20)
          {
              c=3;
          }
      }
        printf("%d\n",c);
  }


    return 0;
}
