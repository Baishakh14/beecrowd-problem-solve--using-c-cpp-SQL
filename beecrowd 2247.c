#include<stdio.h>
int main()
{
       int t = 0;
   int n;
   while(scanf("%d",&n)&&n)
   {
       int s = 0;
       int c[n];
       for(int i = 0;i<n;i++)
       {
           int a,b;
           scanf("%d %d",&a,&b);
           a-=b;
           c[i] = s+=a;
           //printf("%d\n",s);
       }
       t++;
       printf("Teste %d\n",t);
       for(int i = 0;i<n;i++)
       {
           printf("%d\n",c[i]);
       }
       printf("\n");

   }

    return 0;
}

