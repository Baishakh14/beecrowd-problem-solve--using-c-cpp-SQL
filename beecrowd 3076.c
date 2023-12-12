#include<stdio.h>
int main()
{
    int a;
  while(scanf("%d",&a)!=EOF)
  {
      int b;
      b = a;
      a = a/100;
      if(b%100!=0)
      {
          a = a+1;
      }
      printf("%d\n",a);
  }

    return 0;
}
