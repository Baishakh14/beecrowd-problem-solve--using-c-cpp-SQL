#include<stdio.h>
int main()
{
    int n[61];
  n[0] = 0;
  n[1] = 1;
  int j = 0;
  int a;
  scanf("%d",&a);
  for(int i = 2;i<=a;i++)
  {
      n[i] = n[i-1]+n[i-2];
  }
  for(int k = 0;k<a;k++)
  {
      printf("%d",n[k]);
      j++;
      if(j<a)
      {
          printf(" ");
      }
  }
  printf("\n");
    return 0;
}

