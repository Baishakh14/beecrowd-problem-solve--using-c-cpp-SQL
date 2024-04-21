#include<stdio.h>
int main()
{
   int a,b;
   while(scanf("%d %d",&a,&b)!=EOF)
   {
       int ab[a],ba[b];
       for(int i = 0;i<a;i++)
       {
           scanf("%d",&ab[i]);
       }
       for(int i = 0;i<a;i++)
       {
           for(int j = i+1;j<a;j++)
           {
               if(ab[i]<ab[j])
               {
                   int t = ab[i];
                   ab[i] = ab[j];
                   ab[j] = t;
               }
           }
       }
       for(int i = 0;i<b;i++)
       {
           scanf("%d",&ba[i]);
       }
       for(int i = 0;i<b;i++)
       {
           printf("%d\n",ab[ba[i]-1]);
       }
   }
    return 0;
}
