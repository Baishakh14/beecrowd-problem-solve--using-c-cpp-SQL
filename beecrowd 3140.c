#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
       bool b;
   char a[10001];
   while(scanf("%[^\n]%*c",a)!=EOF)
   {
       if(strstr(a,"<body>")!=NULL)
       {
           b = true;
           continue;
       }
       if(strstr(a,"</body>")!=NULL)
       {
           b = false;
       }
       if(b==true) ///whn we find the body is true then print all string untill we find the </body>
           puts(a);

   }

    return 0;
}

