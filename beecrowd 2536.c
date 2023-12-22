#include<stdio.h>
#include<string.h>
int main()
{
   char a[110],b[110];
   while(scanf("%s %s",a,b)!=EOF){
   if(strstr(a,b)!=0)
        printf("Resistente\n");
   else printf("Nao resistente\n");
   }
return 0;
}

