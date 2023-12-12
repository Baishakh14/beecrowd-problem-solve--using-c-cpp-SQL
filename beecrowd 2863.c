#include<stdio.h>
int main()
{
    int n;
    float a;
    while(scanf("%d",&n)!=EOF)
      {
    float m = 100.0;
          for(int i = 0;i<n;i++)
          {
              scanf("%f",&a);
              if(a<m)
              {
                  m = a;
              }
          }
    printf("%.2f\n",m);
       n--;
      }
    return 0;
}

