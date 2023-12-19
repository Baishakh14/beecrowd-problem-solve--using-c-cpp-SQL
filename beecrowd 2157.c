#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  while(n>0)
  {
     int a,b,d;
     scanf("%d %d",&a,&b);
     int s = 0;
     for(int i = a;i<=b;i++)
     {
      printf("%d",i);
     }
     for(int j = b;j>=a;j--)
     {
        d = j;
         while(d)
         {
             int c = d%10;
             printf("%d",c); ///reversing the number and print
             d = d/10;
         }
     }
     printf("\n");
      n--;
  }



    return 0;
}

