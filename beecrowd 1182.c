#include<stdio.h>
///colom in array
int main()
{
 int n;
char a;
float x[12][12];
scanf("%d",&n);
scanf(" %c",&a);
int i,j;
float s = 0;
    for(i = 0;i<12;i++)
    {
        for(j = 0;j<12;j++)
        {
            scanf("%f",&x[i][j]);
        }
    }
        for(i = 0;i<12;i++)
    {
        for(j = 0;j<12;j++)
        {
            if(j == n)
            {
               s = s + x[i][j];
            }
        }
    }
    if(a=='S')
    {
        printf("%.1f\n",s);
    }
    else if(a=='M')
    {
        printf("%.1f\n",s/12);
    }

    return 0;
}

