#include<stdio.h>
//#include<stdlib.h>
int sort(void const *a,void const *b)
{
return *(int*)a - *(int*)b;
}
int main()
{
   int a[3];
   for(int i = 0;i<3;i++)
   {
       scanf("%d",&a[i]);
   }
   qsort(a,3,sizeof(int),sort);
   printf("%d\n",a[1]);
    return 0;
}

