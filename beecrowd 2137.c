#include<stdio.h>
int acc(void const *a,void const *b)
{
    return *(int *)a - *(int *)b;
}
int main()
{
   int n;
   while(scanf("%d",&n)!=EOF)
   {
      int a[n];
       for(int i = 0;i<n;i++)
       {
           scanf("%d",&a[i]);
       }
       qsort(a,n,sizeof(int),acc);
       for(int i = 0;i<n;i++)
       {
           printf("%04d\n",a[i]);
       }
   }

    return 0;
}

