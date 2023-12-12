#include<stdio.h>
#include<string.h>
int main()
{
  char a[100];
  int s = 0;
  for(int i = 0;i<3;i++)
  {
      while(1)
      {
          scanf(" %[^\n]",a);
          if(a[0] == 'c') break;
          else if(strcmp(a,"---")==0) s+=0;
          else if(strcmp(a,"--*")==0) s = s+1;
          else if(strcmp(a,"-*-")==0) s+=2;
          else if(strcmp(a,"-**")==0)  s+=3;
          else if(strcmp(a,"*--")==0)  s+=4;
          else if(strcmp(a,"*-*")==0)  s+=5;
          else if(strcmp(a,"**-")==0)  s+=6;
          else if(strcmp(a,"***")==0)  s+=7;
      }
      printf("%d\n",s);
      s=0;
  }



    return 0;
}

