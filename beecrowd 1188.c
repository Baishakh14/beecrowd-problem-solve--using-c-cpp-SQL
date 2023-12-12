#include<stdio.h>
int main()
{
   double x[12][12],s = 0;
   int n = 1,m = 10;
   char a;
   scanf("%c",&a);
   for(int i = 0;i<12;i++)
   {
       for(int j = 0;j<12;j++)
       {
           scanf("%lf",&x[i][j]);
       }
   }
    for(int i = 11;i>=7;i--)
    {
        for(int j = n;j<=m;j++)
        {
            s = s+x[i][j];
        }
        n++;
        m--;
    }
    if(a == 'S') printf("%.1lf\n",s);
    else if(a=='M') printf("%.1lf\n",s/30);

    return 0;
}
