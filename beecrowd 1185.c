
#include<stdio.h>
int main()
{
  float x[12][12],s = 0;
  int i,j,n=10;
  char a;
  scanf("%c",&a);
  for(i = 0;i<12;i++)
  {
      for(j = 0;j<12;j++)
      {
          scanf("%f",&x[i][j]);
      }
  }
  for(i = 0;i<=10;i++)
  {
      for(j = 0;j<=n;j++)
      {
          s = s+x[i][j];
      }
      n--;
  }
  if(a=='S') printf("%.1f\n",s);
  else if(a=='M') printf("%.1f\n",s/66);
    return 0;
}
