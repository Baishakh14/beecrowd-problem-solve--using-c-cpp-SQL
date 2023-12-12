#include<stdio.h>
int main()
{
 int n;
 while(scanf("%d",&n)!=EOF)
 {
     int a[n][n];
     for(int i = 0;i<n;i++)
     {
         for(int j = 0;j<n;j++)
         {
            a[i][j] = 3;
         }
     }
     for(int i = 0;i<n;i++)
     {
         a[i][i]=1;
     }
     int b=0,c=n-1;
     for(int i = 0;i<n;i++)
     {
         a[b][c] = 2;
         b++;
         c--;
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

