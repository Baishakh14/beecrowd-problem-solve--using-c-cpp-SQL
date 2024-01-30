#include<stdio.h>
///find two friend has unique cards and less unique card can exchange
int main()
{
   int a,b;
   while(scanf("%d %d",&a,&b)&&(a||b))
   {
       int ca = 0;
       int cb = 0;
       int ab[100001] = {0}; ///make all element 0;
       int ba[100001] = {0};
       for(int i = 0;i<a;i++)
       {
           int t;
           scanf("%d",&t);
           ab[t]++;
       }
       for(int i = 0;i<b;i++)
       {
           int t;
           scanf("%d",&t);
           ba[t]++;
       }
       for(int i = 0;i<100001;i++)
       {
           if(ab[i]==0&&ba[i]!=0)
           {
               ca++;
           }
           else if(ab[i]!=0&&ba[i]==0)
           {
               cb++;
           }
       }
       printf("%d\n",(ca<cb)?ca:cb);
   }
    return 0;
}

