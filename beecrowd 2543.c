#include<stdio.h>
int main()
{
   int a,b;
   while(scanf("%d %d",&a,&b)!=EOF)
   {
       int c = 0;
      for(int i = 0;i<a;i++)
      {
          int x,y;
          scanf("%d %d",&x,&y);
          if(x==b&&y==0) c++;
      }
      printf("%d\n",c);
   }
    return 0;
}

