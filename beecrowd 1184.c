#include<stdio.h>
int main()
{
 float x[12][12],s = 0;
 char o;
 scanf(" %c",&o);
 int i,j,p = 0;
 for(i = 0;i<12;i++)
 {
     for(j = 0;j<12;j++)
     {
         scanf("%f",&x[i][j]);
     }
 }
 for(i = 1;i<12;i++)
 {
     for(j = 0;j<=p;j++)
     {
         s = s + x[i][j];
     }
         p++;
 }
 if(o == 'S') printf("%.1f\n",s);
 else if(o == 'M') printf("%.1f\n",s/66);
    return 0;
}

