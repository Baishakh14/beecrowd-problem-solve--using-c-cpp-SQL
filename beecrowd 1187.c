#include<stdio.h>
int main()
{
 int i,j,n = 1,m = 10;
 double x[12][12],s = 0.0;
char o;
scanf(" %c",&o);
for(i = 0;i<=11;i++)
{
    for(j = 0;j<=11;j++)
    {
        scanf("%lf",&x[i][j]);
    }
}
for(i = 0;i<5;i++)
{
    for(j = n;j<=m;j++)
    {
        s = s + x[i][j];
    }
    n++;
    m--;
}
if(o == 'S') printf("%.1lf\n",s);
else if(o == 'M')
{
    s = s/30.0;
    printf("%.1lf\n",s);
}
 return 0;
}

