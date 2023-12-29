#include<stdio.h>
int main()
{
   int h,e,a,o,w,x;
   scanf("%d %d %d %d %d %d",&h,&e,&a,&o,&w,&x);
   int g = h+e+a+x;
   int b = o+w;
   if(g>=b) printf("Middle-earth is safe.\n");
   else printf("Sauron has returned.\n");

    return 0;
}

