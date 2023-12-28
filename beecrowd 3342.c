#include<stdio.h>
#include<math.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a = pow(n,2);
  if(a%2==0)
  {
      a = a/2;
      printf("%d casas brancas e %d casas pretas\n",a,a);
  }
  else
  {
      int b = a/2+1;
      int c = a-b;
      printf("%d casas brancas e %d casas pretas\n",b,c);
  }


    return 0;
}

