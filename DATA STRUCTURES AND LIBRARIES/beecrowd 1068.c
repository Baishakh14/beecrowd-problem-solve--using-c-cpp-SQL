#include<stdio.h>
#include<string.h>
int main()
{
   char a[1001];
   while(scanf("%s",a)!=EOF)
   {
   int s = 0; ///start bracket;
   int e = 0; ///end bracket;
       int n = strlen(a);
       for(int i = 0;i<n;i++)
       {
           if(a[i] == '(')
                s++;
           else if(a[i] == ')')
           {
               e++;
               if(s>0)
               {
                   s--;
                   e--;
               }
           }
       }
       if(e == 0 && s == 0) printf("correct\n");
       else printf("incorrect\n");
   }

    return 0;
}

