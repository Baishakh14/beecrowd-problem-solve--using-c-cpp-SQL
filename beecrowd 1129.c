#include<stdio.h>
int main()
{
  while(1)
  {
      int n;
      scanf("%d",&n);
      if(n==0) break;
      int a[5];
      int k;
      while(n--)
      {
      int c = 0;
          for(int i = 1;i<=5;i++)
          {
              scanf("%d",&a[i]);
              if(a[i]<=127){
                c++;
                k = i;
              }
          }
          if(c==1)
          {
             if(k==1) printf("A\n");
             if(k==2) printf("B\n");
             if(k==3) printf("C\n");
             if(k==4) printf("D\n");
             if(k==5) printf("E\n");
          }
          else printf("*\n");
      }
  }

    return 0;
}

