#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char a[1000];
  while(scanf(" %[^\n]%*c",a)!=EOF)
  {
      int cu = 0,cl = 0,cn = 0,p = 0;
      int l = strlen(a);
      if(l<6||l>32) p++;
      else
      {
          for(int i = 0;i<l;i++)
          {
              if(a[i]>=97&&a[i]<=122) cl++;
             else if(a[i]>=65&&a[i]<=90) cu++;
             else if(isdigit(a[i])) cn++;
              else p++;
          }
      }
          if(p==0&&cu!=0&&cl!=0&&cn!=0) printf("Senha valida.\n");
          else printf("Senha invalida.\n");
  }
    return 0;
}
