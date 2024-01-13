#include<stdio.h>
#include<string.h>
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  int s = a;
  char c[100];
  for(int i = 0;i<b;i++)
  {
      scanf("%s%*c",c);
      if(strcmp(c,"fechou")==0) s++;
      else s--;
   }
    printf("%d\n",s);
    return 0;
}

