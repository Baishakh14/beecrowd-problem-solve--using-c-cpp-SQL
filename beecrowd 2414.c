//#include<stdio.h>
//int main()
//{
//    int a[101];
//    int n;
//    for(int i = 0;i<101;i++)
//    {
//        scanf("%d",&a[i]);
//        if(a[i]==0)
//        {
//            break;
//        }
//        n = i;
//    }
//    n = n+1;
//    int b = a[0];
//    for(int i = 0;i<n;i++)
//    {
//        for(int j = i+1;j<n;j++)
//        {
//            if(a[i]>b) b = a[i];
//        }
//    }
//    printf("%d\n",b);
//    return 0;
//}
///its right but not taking
#include<stdio.h>
#include<stdbool.h>
int m(int a,int b)
{
    if(a>b) return a;
    else return b;
}
int main()
{
  int a,b = 0;
  while(true)
  {
      scanf("%d",&a);
      if(a==0) break;
      b = m(a,b);
  }
  printf("%d\n",b);

    return 0;
}

