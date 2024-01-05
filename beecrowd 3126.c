#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  int b,c = 0;
  for(int i = 0;i<a;i++)
  {
      scanf("%d",&b);
      if(b==1) c++;
  }
   printf("%d\n",c);

    return 0;
}

