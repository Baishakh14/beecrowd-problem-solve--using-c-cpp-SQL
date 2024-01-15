#include<stdio.h>
int main()
{
  int p,r;
  scanf("%d %d",&p,&r);
  if(!p) printf("C\n");
  if(p==1)
  {
      if(r==0) printf("B\n");
      if(r==1) printf("A\n");
  }


    return 0;
}

