#include<stdio.h>
#include<string.h>
int main()
{
   char a[10001];
   scanf("%[^\n]%*c",a);
   if(strstr(a,"13")!=NULL) printf("%s es de Mala Suerte\n",a);
   else printf("%s NO es de Mala Suerte\n",a);
    return 0;
}

