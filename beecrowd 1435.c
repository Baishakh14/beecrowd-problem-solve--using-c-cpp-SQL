#include<stdio.h>
int main()
{
    while(1)
    {
        int i,j;
 int n;
 int h;
 scanf("%d",&n);
 h = n/2;
 if(n%2==1) h++;
 if(n==0)
    break;
 int a[n][n];
 int b,c;
 b = 0;
 c = n-1;
 for(int l = 1;l<=h;l++){
 for(i = b;i<=c;i++)
 {
     for(j = b;j<=c;j++)
     {
         a[i][j] = l;
     }
 }
b++;
c--;
 }
  for(int i = 0;i<n;i++)
 {
     for(int j = 0;j<n;j++)
     {
        if(j==0)printf("%3d",a[i][j]);
        else printf(" %3d",a[i][j]);
     }
     printf("\n");
 }
 printf("\n");
    }

    return 0;
}

