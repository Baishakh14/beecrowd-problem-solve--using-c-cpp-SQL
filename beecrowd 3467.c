#include<stdio.h>
#include<string.h>
int main()
{
  char a[3];
  while(scanf("%s",a)!=EOF)
  {
      if(strcmp(a,"xxL")==0) printf("Esse eh o meu lugar\n");
      else printf("Oi, Leonard\n");
  }
    return 0;
}

