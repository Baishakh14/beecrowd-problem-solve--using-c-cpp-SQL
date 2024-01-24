#include<stdio.h>
int main()
{
   char str[15];
   while(scanf("%s",str)!=EOF)
   {
      ///int n[15];
      int p = 0;
      int q = 0;
      int j = 9;
      int l = 1;
      for(int i = 0;i<11;i++)
      {
          if(i!=3&&i!=7&&i!=11)
          {
              p+=(str[i]-'0')*l;
              l++;
              q+=(str[i]-'0')*j;
              j--;
          }
      }
      int b1 = str[12]-'0';
      int b2 = str[13]-'0';
      if(((p%11==10)&&!b1)||(p%11==b1))
      {
          if(((q%11==10)&&!b2)||(q%11==b2))
          {
              printf("CPF valido\n");
          }
          else printf("CPF invalido\n");
      }
         else {
            printf("CPF invalido\n");
        }
   }
    return 0;
}

