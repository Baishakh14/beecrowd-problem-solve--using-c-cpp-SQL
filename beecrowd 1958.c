#include<stdio.h>
int main()
{
   long double n;
   scanf("%LE",&n);
   char a[120];
   sprintf(a,"%LE",n);
   if(a[0]!='-')
        printf("+");
   printf("%.4LE\n",n);
    return 0;
    }
