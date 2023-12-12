#include<stdio.h>
int main()
{
 float a[12][12];
 int n;
 scanf("%d",&n);
 char b;
scanf(" %c",&b);//remove buffer.
  int i,j;
  float sum = 0;
  for(i = 0;i<=11;i++)
  {
      for(j = 0;j<=11;j++)
      {
          scanf("%f",&a[i][j]);
          if(i==n)
          {
              sum = sum+a[i][j];
          }
      }
  }
  if(b=='S'){
  printf("%.1f\n",sum);
  }
  else if(b=='M')
  {
  printf("%.1f\n",(sum/12.0));
  }
    return 0;
}

