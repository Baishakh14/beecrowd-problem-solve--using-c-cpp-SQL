#include<stdio.h>
int main()
{
   int a,b;
   while(scanf("%d %d",&a,&b)&&a!=0&&b!=0) ///if a and b both are 0 then terminate the programme
   {
       printf("%d\n",2*a-b);
   }
    return 0;
}

