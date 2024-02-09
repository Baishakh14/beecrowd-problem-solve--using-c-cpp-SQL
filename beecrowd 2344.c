#include<stdio.h>
int main()
{
   int a;
   scanf("%d",&a);
   if(a==0) printf("E\n");
   if(a>0 && a<36) printf("D\n");
   if(a>35 && a<61) printf("C\n");
   if(a>60 && a<86) printf("B\n");
   if(a>85 && a<101) printf("A\n");
    return 0;
}

