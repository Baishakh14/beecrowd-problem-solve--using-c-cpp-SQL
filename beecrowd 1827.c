#include<stdio.h>
int main()
{
  int n;
  while(scanf("%d",&n)!=EOF)
  {
      int a[101][101];
      int b = n-1;
      for(int i = 0;i<n;i++)
      {
          for(int j = 0;j<n;j++)
          {
              if(i==j) a[i][j] = 2;
              else a[i][j] = 0;
              if(b==j) a[i][j] = 3;
          }
          b--;
      }
      int l = n/3;
      int k = n/2;
      for(int i = l;i<n-l;i++)
      {
          for(int j = l;j<n-l;j++)
          {
              a[i][j] = 1;
              if(i==k&&j==k) a[i][j] = 4;
          }
      }
            for(int i = 0;i<n;i++)
      {
          for(int j = 0;j<n;j++)
          {
              printf("%d",a[i][j]);
          }
          printf("\n");
      }
      printf("\n");
  }
    return 0;
}

