#include<stdio.h>
int main()
{
   int a;
   int b;
   while(scanf("%d",&a))
   {
       if(a==0)
        return 0;
       for(int i = 0;i<a;i++)
       {
           scanf("%d",&b);
           if(b%2!=0)
            printf("%d\n",b*2-1);
           else
            printf("%d\n",b*2-2);
       }
   }
    return 0;
}

