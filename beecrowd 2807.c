#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  a[0] = 1;
  a[1] = 1;
  int b = 1;
  for(int i = 2;i<n;i++)
  {
      a[i] = a[i-1]+a[i-2];
  }
   for(int i = n-1;i>=0;i--)
   {
       printf("%d",a[i]);
       if(b<n)
       {
           printf(" ");
           b++;
       }
   }
printf("\n");
    return 0;
}

