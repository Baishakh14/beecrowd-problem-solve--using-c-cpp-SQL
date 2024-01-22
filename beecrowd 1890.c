#include<stdio.h>
#include<math.h>
int main()
{
       int a,b;
    int n;
   scanf("%d",&n);
   while(n--)
   {
       scanf("%d %d",&a,&b);
       if(a==0&&b==0) printf("0\n");
       else
       printf("%d\n",(int)pow(26,a)*(int)pow(10,b));
   }

    return 0;
}

