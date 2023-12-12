#include<stdio.h>
int main()
{
 int i,j,n = 11;
 float x[12][12],s = 0;
char a;
scanf("%c",&a);
for(i = 0;i<12;i++)
{
    for(j = 0;j<12;j++)
    {
        scanf("%f",&x[i][j]);
    }
}
for(i = 1;i<12;i++)
{
    for(j = 11;j>=n;j--)
    {
        s = s + x[i][j];
    }
    n--;
}
if(a == 'S') printf("%.1f\n",s);
    else if(a == 'M') printf("%.1f\n",s/66);

    return 0;
}
