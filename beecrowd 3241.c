#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  int n;
  scanf("%d",&n);
  getchar();
  while(n--)
  {
     char a[1001];
     int c,d,e;
     c = d = e = 0;
     scanf("%[^\n]%*c",a); ///use a space a after " then no need to use getchar()
      int l = strlen(a);
      for(int i = 0;i<l;i++)
      {
          if(isdigit(a[i]))
          {
            int b = a[i]-'0';
            c = c*10+b;
            e++;
          }
          else if(a[i]=='+')
          {
              d = c;
              c = 0;
          }
      }
      if(e==0) printf("skipped\n");
      else printf("%d\n",c+d);
  }

    return 0;
}
