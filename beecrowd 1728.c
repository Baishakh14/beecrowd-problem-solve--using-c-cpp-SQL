#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void rev(char *a)
{
    char b[100] = "";
    int x = 0;
    int l = strlen(a);
    for(int i = l-1;i>=0;i--)
    {
        b[x] = a[i];
        x++;
    }
    strcpy(a,b);
}
int main()
{
   while(1)
   {
   char s[100];
   scanf("%s",s);
       char a[10] = "",b[10] = "",c[10]="";
       int x = 0;
       int _a = 0;
       int l = strlen(s);
       for(int i = 0;i<l;i++)
       {
           if(_a == 0&&s[i]!='+'&&s[i]!='=')
           {
               a[x] = s[i];
               x++;
           }
           else if(s[i]=='+')
           {
               _a = 1;
               x = 0;
           }
           else if(_a == 1&&s[i]!='+'&&s[i]!='=')
           {
               b[x] = s[i];
               x++;
           }
           else if(s[i]=='=')
           {
               _a = 2;
               x = 0;
           }
           else if(_a == 2&&s[i]!='+'&&s[i]!='=')
           {
               c[x] = s[i];
               x++;
           }
       }

   // printf("%s %s %s",a,b,c);
   rev(a);
   rev(b);
   rev(c);
//   strrev(a);
//   strrev(b);
//   strrev(c);
   int an,bn,cn;
   an = atoi(a);
   bn = atoi(b);
   cn = atoi(c);
   //printf("%d %d %d\n",an,bn,cn);
   if(an+bn==cn) printf("True\n");
   else printf("False\n");
   if(strcmp(s,"0+0=0")==0) return 0;
   }

    return 0;
}

