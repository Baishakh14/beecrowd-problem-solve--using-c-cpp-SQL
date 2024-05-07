#include<stdio.h>
#include<string.h>
int main()
{
   int n;
   scanf("%d",&n);
   while(n--)
   {
       double tt = 0.0; ///total taka;
       int a;
       scanf("%d",&a);
       char he[a][100]; ///have element;
       double ht[a]; ///taka in market;
       for(int i = 0;i<a;i++)
       {
           scanf("%s %lf",&he[i],&ht[i]);
       }
       int b;
       scanf("%d",&b);
       char re[b][100]; ///requre element;
       int am[b]; ///ammount she need;
       for(int i = 0;i<b;i++)
       {
           scanf("%s %d",&re[i],&am[i]);
       }
       for(int i = 0;i<b;i++)
       {
           for(int j = 0;j<a;j++)
           {
               if(strcmp(re[i],he[j]) == 0)
               {
                   tt += (am[i]*ht[j]);
                   break;
               }
           }
       }
       printf("R$ %.2lf\n",tt);
   }

    return 0;
}

