#include<stdio.h>
int main()
{
    int c;
   int a[100];
   for(int b = 0;b<100;b++)
   {
       scanf("%d",&a[b]);
   }
   int m = a[0];
   for(int i = 1;i<100;i++)
   {
       if(a[i]>m)
       {
           m = a[i];
           c = i+1;
       }
   }
   printf("%d\n%d\n",m,c);
return 0;
}

