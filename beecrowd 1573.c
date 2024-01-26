#include<stdio.h>
#include<math.h>
int main()
{
   int a,b,c;
   while(scanf("%d %d %d",&a,&b,&c)&&(a||b||c)) ///if any is not 0 then ok,if all is 0 then stop the programm
   {
       printf("%d\n",(int)cbrt(a*b*c));
   }
    return 0;
}

