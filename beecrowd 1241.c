#include<stdio.h>
#include<string.h>
int main()
{
   int n;
   scanf("%d",&n);
   while(n>0)
   {
       char a[1050];
       char b[1050];
       scanf("%s %s",a,b);
       int al = strlen(a);
       int bl = strlen(b);
       int c = 0;
       for(al,bl;bl>=0;al--,bl--)
       {
          if(a[al]==b[bl])
          {
              c++;
          }
          else
            break;
       }
       if(c==strlen(b)+1)
       {
           printf("encaixa\n");
       }
       else
       {
           printf("nao encaixa\n");
       }
       n--;
   }

    return 0;
}

