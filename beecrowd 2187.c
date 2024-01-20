#include<stdio.h>
int main()
{
   int n;
   int t = 0;
   while(scanf("%d",&n),n)
   {
       int b[4];
       b[0] = n/50;
       n = n%50;
       b[1] = n/10;
       n = n%10;
       b[2] = n/5;
       n = n%5;
       b[3] = n/1;
       printf("Teste %d\n",++t);
       printf("%d %d %d %d\n",b[0],b[1],b[2],b[3]);
       printf("\n");
   }

    return 0;
}

