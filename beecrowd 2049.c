#include<stdio.h>
#include<string.h>
int main()
{
   int a = 1;
   char ab[10001];
   char abc[3000001];
   while(scanf("%s",ab)&& strcmp(ab,"0")!=0)
   {
       scanf(" %s",abc);
       if(a!=1) printf("\n");
       if(strstr(abc,ab))
       {
           printf("Instancia %d\n",a);
           printf("verdadeira\n");

       }
       else
       {
        printf("Instancia %d\n",a);
        printf("falsa\n");
       }
       a++;   }
    return 0;
}

