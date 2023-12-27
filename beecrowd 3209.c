#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 while(n--)
 {
     int a,b,c=0;
     scanf("%d",&a);
     for(int i = 0;i<a;i++)
     {
         scanf("%d",&b);
         c = c + b;
     }
     printf("%d\n",(c-a)+1);
 }
    return 0;
}

