#include<stdio.h>
int main()
{
   int a,b;
   scanf("%d %d",&a,&b);
   int m[a][b];
   for(int i = 0;i<a;i++)
   {
       for(int j = 0;j<b;j++)
       {
           scanf("%d",&m[i][j]);
       }
   }
//   for(int i = 0;i<a;i++)
//   {
//       for(int j = 0;j<b;j++)
//       {
//           printf("%d\t",m[i][j]);
//       }
//       printf("\n");
//   }
   int max = 0;
      for(int i = 0;i<a;i++)
   {
       int s = 0;
       for(int j = 0;j<b;j++)
       {
           s+=m[i][j]; ///sum of raw
       }
       if(s>max) max = s;
   }
       for(int i = 0;i<b;i++)
   {
       int s = 0;
       for(int j = 0;j<a;j++)
       {
           s+=m[j][i]; ///sum of column
       }
       if(s>max) max = s;
   }
printf("%d\n",max);
    return 0;
}

