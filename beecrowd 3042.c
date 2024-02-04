#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
   int n;
   while(scanf("%d",&n),n)
   {
       int p = 2;
       int s = 0;
       for(int i = 0;i<n;i++)
       {
           int l,c,r;
           scanf("%d %d %d",&l,&c,&r);
           if((l==0 && c==1 && r==1)&&p!=1)
           {
               s+=abs(p-1);
               p = 1;
           }
           else if((l==1 && c==1 && r==0)&&p!=3)
           {
               s+=abs(p-3);
               p = 3;
           }
           else if((l==1 && c==0 && r==1)&&p!=2)
           {
               s+=abs(p-2);
               p = 2;
           }
       }
       printf("%d\n",s);
       }

    return 0;
}

