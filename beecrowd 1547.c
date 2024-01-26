#include<stdio.h>
#include<math.h>
int main()
{
   int n;
   scanf("%d",&n);
   while(n--)
   {
       int a,b,j,d,c = 0,t=1000;
       scanf("%d%d",&a,&b);
       for(j = 0;j<a;j++)
       {
           scanf("%d",&d);
           int x = abs(d-b);
           if(t>x)
           {
               c = j;
               t = x;
           }
       }
       printf("%d\n",c+1);
   }

    return 0;
}

