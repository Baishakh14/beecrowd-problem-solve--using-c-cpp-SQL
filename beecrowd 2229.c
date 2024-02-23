#include<stdio.h>
#include<math.h>
int main()
{
      int t = 0;
  int a;
  while(scanf("%d",&a)&&a!=-1)
  {
      int r;
      printf("Teste %d\n",++t);
      if(a==0) r = 4;
     else if (a==1) r = 9;
      else r = ((1+pow(2,a))*(1+pow(2,a)));
          printf("%d\n\n",r);
  }

    return 0;
}

