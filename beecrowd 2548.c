#include<stdio.h>
int main()
{
   int n,m;
   while(scanf("%d%d",&n,&m)!=EOF)
   {
       int s = 0;
       int a[n];
       int i;
       for(i = 1;i<=n;i++)
       {
           scanf("%d",&a[i]);
           if(i>(n-m))
           {
              s = s+a[i];
           }
       }
       printf("%d\n",s);
        s = 0;
   }

    return 0;
}

