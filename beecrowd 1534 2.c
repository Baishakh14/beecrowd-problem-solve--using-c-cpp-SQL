#include<stdio.h>
int main()
{
 int b,c,n;
 while(scanf("%d",&n)!=EOF)
 {
     int a[n][n];
     b = n-1;
     for(int i = 0;i<n;i++)
     {
         for(int j = 0;j<n;j++)
         {
             if(i==j) a[i][j] = 1;
             else a[i][j] = 3;
             if(j==b) {a[i][j] = 2;
             b--;
             }
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
 }
  return 0;
}

