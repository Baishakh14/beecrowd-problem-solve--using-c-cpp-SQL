#include<stdio.h>
int main()
{
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   int v[b];
   int v1[c];
   int s = 0;
   for(int i = 0;i<b;i++)
   {
       scanf("%d",&v[i]);
   }
   for(int i = 0;i<c;i++)
   {
       scanf("%d",&v1[i]);
   }
   for(int i = 0;i<b;i++)
   {
           int f = 0;
       for(int j = 0;j<c;j++)
       {
           if(v[i] == v1[j])
           {
               f = 1;
               break;
           }
       }
       if(!f) s++;
   }
    printf("%d\n",s);
    return 0;
}

