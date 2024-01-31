#include<stdio.h>
int main()
{
   int a,b;
   while(scanf("%d %d",&a,&b)!=EOF)
   {
           int c;
       int t[1100];
       for(int i = 0;i<b;i++)
       {
           scanf("%d",&c);
           t[c] = c;
       }
       for(int i = 0;i<a;i++)
       {
           int d;
           scanf("%d",&d);
           if(t[d] == d)
           {
               printf("0\n");
           }
           else
            {
               printf("1\n");
               t[d] = d;
            }
       }
   }

    return 0;
}

