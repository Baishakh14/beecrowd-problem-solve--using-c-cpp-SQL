#include<stdio.h>
#include<string.h>
int main()
{
  int n;
  scanf("%d",&n);
  while(n>0)
  {
     char a[100];
     char b[100];
     char c[200] = {'\0'}; ///  "" can also define a null charecter
     scanf(" %[^\n]",a);
     scanf(" %[^\n]",b);
      for(int i = 0;i<strlen(a);i+=2)
      {
          strncat(c,&a[i],2);
          strncat(c,&b[i],2);
      }
      printf("%s\n",c);
     n--;
  }


    return 0;
}

