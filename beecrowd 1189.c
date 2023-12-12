#include<stdio.h>
int main()
{
   double x[12][12],s = 0;
   int n = 0,m = 4;
    char a;
    scanf("%c",&a);
    for(int i = 0;i<12;i++)
    {
        for(int j = 0;j<12;j++)
        {
            scanf("%lf",&x[i][j]);
        }
    }
    for(int i = 1;i<=10;i++)
    {
        if(i<=5)
        {
            for(int j = 0;j<=n;j++)
            s = s+x[i][j];
                n++;
        }
        if(i>=6)
        {
            for(int j = 0;j<=m;j++)
                s = s+x[i][j];
            m--;
        }

    }
    if(a=='S') printf("%.1lf\n",s);
    else if(a=='M') printf("%.1lf\n",s/30);
    return 0;
}

