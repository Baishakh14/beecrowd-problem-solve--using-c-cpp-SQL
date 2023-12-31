#include<stdio.h>
int main()
{
 int a,b;
 scanf("%d %d",&a,&b);
 int e;
 int c[101] = {'/0'};///use {0} or {'\0'} all are right .or use loop and make all 0;
 int d = 0;
 for(int i = 1;i<=b;i++)
 {
     scanf("%d",&e);
     c[e]++;
 }
  for(int i = 1;i<=a;i++)
  {
      if(!c[i]) d++;
  }
  printf("%d\n",d);

  return 0;

  ///Both are right

}
#include<stdio.h>
#include<stdbool.h>
int main()
{
 int a,b;
 scanf("%d %d",&a,&b);
 int e;
 bool c[101] = { false };///_Bool c[101] = {false};
 int d = 0;
 for(int i = 1;i<=b;i++)
 {
     scanf("%d",&e);
     c[e] = true;
 }
  for(int i = 1;i<=a;i++)
  {
      if(!c[i]) d++;
  }
  printf("%d\n",d);

  return 0;
}


