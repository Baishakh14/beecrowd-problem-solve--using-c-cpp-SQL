#include<stdio.h>
#include<math.h>
int main()
{
 int a,b;
 while(scanf("%d %d",&a,&b)!=EOF)
 {
     int n[a][b];
     int x,y,x1,y1,t;
     for(int i = 0;i<a;i++)
     {
         for(int j = 0;j<b;j++)
         {
             scanf("%d",&n[i][j]);
             if(n[i][j]==1)
             {
                 x = i;
                 y = j;
             }
             if(n[i][j]==2)
             {
                 x1 = i;
                 y1 = j;
             }
         }
     }
     t = abs(x-x1)+abs(y-y1);
     printf("%d\n",t);
 }
    return 0;
}

