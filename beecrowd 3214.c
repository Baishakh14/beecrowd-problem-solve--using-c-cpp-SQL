//Bismillahi Rahmanir Rahim
#include<stdio.h>
int main()
{
    unsigned int a,b,c;
   scanf("%u %u %u",&a,&b,&c);
   int i = 0;
   a = a+b;
   while(a>=c)
   {
      i++;
      a = a-c;
      a++;
   }
  printf("%d\n",i);

    return 0;
}

