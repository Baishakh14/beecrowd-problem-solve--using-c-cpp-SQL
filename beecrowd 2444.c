#include<stdio.h>
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  for(int i = 0;i<b;i++)
  {
      int c;
      scanf("%d",&c);
      a+=c;
      if(a>100)
        a = 100;
      if(a<0) a = 0;
  }
   printf("%d\n",a);
    return 0;
}
