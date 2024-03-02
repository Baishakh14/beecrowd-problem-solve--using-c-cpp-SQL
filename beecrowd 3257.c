#include<stdio.h>
int c(void const *a,void const *b)
{
    return *(int*)b-*(int*)a;
}
#define loop for(int i = 0;i<n;i++)
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    loop
    {
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),c);
//    loop
//    {
//        printf("%d ",a[i]);
//   }
//   printf("\n");
  int ans = a[0]+2;
  for(int i = 1;i<n;i++)
  {
      if(i+a[i]+2>ans) ans = a[i]+2+i;
  }
  printf("%d\n",ans);
    return 0;
}

