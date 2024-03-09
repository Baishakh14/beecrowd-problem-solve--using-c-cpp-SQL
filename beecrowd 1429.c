#include<stdio.h>
#include<string.h>
int fac(int a)
{
    if(a==1||a==0) return 1;
    else return a*fac(a-1);
}
int main()
{
//    printf("        %d\n",fac(5));
  while(1)
  {
      char a[100];
      scanf("%s",a);
      if(strcmp(a,"0")==0) return 0;
      int l = strlen(a);
      int t = 0;
      int tp = l;
      for(int i = 0;i<l;i++)
      {
          int n = a[i]-'0';
//          printf("%d\n",n);
          t+=n*fac(tp);
          tp--;
//          printf("l = %d\n",l);
//          printf("%d\n",t);
      }
      printf("%d\n",t);
  }

    return 0;
}
