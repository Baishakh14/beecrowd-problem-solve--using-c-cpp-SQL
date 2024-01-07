#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
   int n;
   scanf("%d",&n);
      char a[101];
   while(n>0)
   {
       scanf("%s%*c",a);
           int b = a[0]-'0';
          int c = a[2]-'0';
       if(b==c)
      {
          printf("%d\n",b*c);
      }
      else if(isupper(a[1]))
      {
          printf("%d\n",c-b);
      }
      else if(islower(a[1]))
      {
          printf("%d\n",b+c);
      }
      n--;
   }

    return 0;
}

