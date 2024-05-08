#include<stdio.h>
#define ms 10001
int dec(void const *a,const void *b)
{
    return *(int*)b - *(int*)a;
}
int main()
{
   int a,b;
   int dn[ms];
   int vn[ms];
   char dc[ms];
   char vc[ms];
   int x,y = 0;
   scanf("%d %d",&a,&b);
   for(int i = 0;i<a;i++)
   {
       for(int j = 0;j<b;j++)
       {
           int ab;
           char ba;
           scanf("%d %c",&ab,&ba);
           if(ba == 'V')
           {
               vn[x] = ab;
               vc[x] = ba;
               x++;
           }
            else if(ba == 'D')
           {
               dn[y] = ab;
               dc[y] = ba;
               y++;
           }
       }
   }
   qsort(vn,x,sizeof(int),dec);
   qsort(dn,y,sizeof(int),dec);
   for(int i = 0;i<x;i++)
   {
       printf("%d%c\n",vn[i],vc[i]);
   }
   for(int i = 0;i<y;i++)
   {
       printf("%d%c\n",dn[i],dc[i]);
   }

    return 0;
}

