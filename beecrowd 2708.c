#include<stdio.h>
#include<string.h>
int main()
{
      int rp = 0; ///passenger should return
      int rc = 0; ///car should return
  while(1)
  {
  char a[1001];
      scanf("%s",a);
      if(strcmp(a,"SALIDA")==0)
      {
          int s;
          rc++;
          scanf("%d",&s);
          rp+=s;
      }
      else if(strcmp(a,"VUELTA")==0)
      {
          int s;
          rc--;
          scanf("%d",&s);
          rp-=s;
      }
      else if(strcmp(a,"ABEND")==0)
      {
          printf("%d\n%d\n",rp,rc);
          return 0;
      }
  }

    return 0;
}

