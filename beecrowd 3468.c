#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
  char a[101];
  scanf(" %s",a);
  int l = strlen(a);
  for(int i = 0;i<l;i++)
  {
      a[i] = tolower(a[i]);
  }
if(strcmp(a,"oposicao")==0) printf("mas\n");
if(strcmp(a,"quantidade")==0) printf("mais\n");
if(strcmp(a,"intensidade")==0) printf("mais\n");
if(strcmp(a,"contrariedade")==0) printf("mas\n");
    return 0;
}

