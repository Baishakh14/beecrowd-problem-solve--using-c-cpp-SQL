#include<stdio.h>
int main()
{
   int n;
   while(scanf("%d",&n)&&n!=0)
   {
           int c = 0;
       while(1)
       {
           int a = 0;
           for(int i = 1;i<=n;i++)
           {
               int x;
               scanf("%d",&x);
               if(x!=i)
               {
                   a++;
               }
           }
           c++;
           if(a==0) break;
       }
       printf("%d\n",c);
   }
    return 0;
}

