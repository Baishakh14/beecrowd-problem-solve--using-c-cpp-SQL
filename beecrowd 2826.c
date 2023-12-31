#include<stdio.h>
#include<string.h>
int main()
{
  char a[21],b[21];
  scanf("%s%*c %s%*c",a,b);
   if(strcmp(a,b)<0)
       printf("%s\n%s\n",a,b);
       else printf("%s\n%s\n",b,a);
    return 0;
}

