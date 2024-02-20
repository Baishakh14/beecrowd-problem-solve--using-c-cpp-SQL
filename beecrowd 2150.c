#include<stdio.h>
#include<string.h>
int main()
{
   char a[1001];
   while(scanf("%s",a)!=EOF)
   {
       int t = 0;
     char b[1001];
     scanf(" %[^\n]",b);
     for(int i = 0;i<strlen(b);i++)
     {
         for(int j = 0;j<strlen(a);j++)
         {
             if(b[i]==a[j]) t++;
         }
     }
     printf("%d\n",t);
   }

    return 0;
}

