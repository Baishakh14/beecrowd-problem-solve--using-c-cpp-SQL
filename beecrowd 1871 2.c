#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    while(1){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==0&&b==0) break;
    int a1 = (a) +(b);
  char c[20];
  sprintf(c,"%d",a1);
  int l = strlen(c);
  for(int i = 0;i<l;i++)
  {
      if(c[i]!='0')
      {
          printf("%c",c[i]);
      }
  }
      printf("\n");
    }
    return 0;
}

