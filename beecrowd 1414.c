#include<stdio.h>
int main()
{
   int a,b;
   while(scanf("%d %d",&a,&b)&&a)
   {
       int s = 0;
       int p;
       char t[100];
       while(a--)
       {
           scanf("%s %d",t,&p);
           s+=p;
       }
       printf("%d\n",b*3-s);
   }

    return 0;
}

