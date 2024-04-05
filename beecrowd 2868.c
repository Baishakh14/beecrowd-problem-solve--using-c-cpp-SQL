#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      char a[1001];
      scanf(" %[^\n]",a);
     /// getchar();
      int ab = 0,bc = 0,ca = 0;
      char x;
      int z = 0;
      int l = strlen(a);
      for(int i = 0;i<l;i++)
      {
          if(a[i] != '+'&&a[i] != '-'&&a[i] != 'x'&&a[i] !=' ' &&a[i] != '=' && z == 0)
          {
              ab = ab*10+(a[i]-'0');
          }
          else if(a[i] == '+'||a[i] == '-'||a[i] == 'x')
          {
              z = 1;
              x = a[i];
          }
          else if(isdigit(a[i]) && z==1)
          {
              bc = bc*10+(a[i]-'0');
          }
          else if(a[i]=='=')
          {
              z = 2;
          }
          else if(z==2 && isdigit(a[i]))
          {
              ca = ca*10+(a[i]-'0');
          }
      }
     int abc;
     if(x=='+')
     {
         abc = abs((ab+bc)-ca);
     }
     if(x == '-')
     {
         abc = abs((ab-bc)-ca);
     }
     if(x=='x') abc = abs((ab*bc)-ca);
        printf("E");
   for(int i = 0;i<abc;i++)
    printf("r");
   printf("ou!");
   printf("\n");
    }

    return 0;
}
