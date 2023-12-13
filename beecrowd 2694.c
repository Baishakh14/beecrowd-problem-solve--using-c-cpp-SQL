#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   char a[15];
   while(n>0)
   {
       int s = 0;
       int num;
       int ns = 0;
       scanf(" %s",a);
       for(int i = 0;i<14;i++)
       {
           if(a[i]>='0' && a[i]<='9')
           {
               num = a[i]-'0';
               ns = (ns*10)+num;
           }
           else
           {
               s+=ns;
               ns = 0;
           }
       }
       printf("%d\n",s);
       n--;
   }
    return 0;
}

