#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int c = 1;
   int a[n];
   for(int i = 0;i<n;i++)
       scanf("%d",&a[i]);
       if(n == 2&& a[0]==a[1]) c = 0;
       else
       {
           for(int i = 2;i<n;i++)
           {
               if((a[i]>=a[i-1]&&a[i-1]>=a[i-2])||(a[i]<=a[i-1]&&a[i-1]<=a[i-2]))
               {
                   c = 0;
                   break;
               }

           }
       }
   printf("%d\n",(c==1)?1:0);
//if (c == 1) {
//    printf("1\n");
//} else {
//    printf("0\n");
//}
    return 0;
}

