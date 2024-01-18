#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   if(a>=n&&b>=n&&c>=n) printf("S\n");
   else printf("N\n");

    return 0;
}

