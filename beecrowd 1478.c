#include<stdio.h>
int main()
{
  int n,i,j;
  while(1)
  {
      scanf("%d",&n);
      if(n==0) break;
      int a[n][n];
      for(i=0;i<n;i++)
      {
          int m = i+1;
          int k = 2;
          for(j=0;j<n;j++)
          {
              a[i][j] = m;
              m--;
          }
          for(j=i+1;j<n;j++,k++)
          {
              a[i][j] = k;
          }
      }
            for(i=0;i<n;i++)
      {
          for(j=0;j<n;j++)
          {
              if(j==0)
              printf("%3d",a[i][j]);
              else printf(" %3d",a[i][j]);
          }
          printf("\n");
      }
      printf("\n");
  }


    return 0;
}

