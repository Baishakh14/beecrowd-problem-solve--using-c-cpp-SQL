#include<stdio.h>
#include<stdlib.h>
int dec(void const *a,const void *b) ///for deccending order sort;
{
    return *(int*)b - *(int*)a;
}
int main()
{
   int n;
   scanf("%d",&n);
   while(n--)
   {
       int m;
       scanf("%d",&m);
       int ab[m];
       int ba[m];
       for(int i = 0;i<m;i++)
       {
           scanf("%d",&ab[i]);
           ba[i] = ab[i];
       }
       qsort(ab,m,sizeof(int),dec);
       int c = 0;
       for(int i = 0;i<m;i++)
       {
           if(ab[i] == ba[i]) c++;
       }
       printf("%d\n",c);
   }

    return 0;
}

