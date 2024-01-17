#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i = 0;i<n;i++)
  {
      a[i] = 0;
  }
   for(int i = 0;i<n;i++)
   {
       int s;
       scanf("%d",&s);
       if(s)
       {
           a[i]+=1;
           if(i+1<n)
           {
               a[i+1]+=1;
           }
           if(i>0) a[i-1]+=1;
       }
   }
   for(int i = 0;i<n;i++)
   {
       printf("%d\n",a[i]);
   }

    return 0;
}

