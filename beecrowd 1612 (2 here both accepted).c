//#include<stdio.h>
//int main()
//{
//  int n;
//  scanf("%d",&n);
//  while(n>0)
//  {
//     int a;
//     scanf("%d",&a);
//     printf("%d\n",(a%2)?a/2+1:a/2); ///you can use if else here if(a%2) is true thats how it works
//      n--;
//  }
//    return 0;
//}
#include<stdio.h>
#include<math.h>
int main()
{
   int n;
   scanf("%d",&n);
   while(n--)
   {
       int a;
       scanf("%d",&a);
       printf("%d\n",(int)ceil(a/2.0));
   }
    return 0;
}

