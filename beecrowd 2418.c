#include<stdio.h>
int main()
{
    double a[5];
    for(int i = 0;i<5;i++)
    {
        scanf("%lf",&a[i]);
    }
    for(int i = 0;i<5;i++)
    {
          for(int j = i+1;j<5;j++)
         {
             if(a[j]<a[i])
             {
                 double t = a[j];
                 a[j] = a[i];
                 a[i] = t;
             }
         }
    }
    double s = 0;
      for(int i = 1;i<5-1;i++)
    {
        s+=a[i];
    }
    printf("%.1lf\n",s);
    return 0;
}

