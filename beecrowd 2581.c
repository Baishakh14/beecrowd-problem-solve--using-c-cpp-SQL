#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  getchar();
  while(a>0)
  {
      getchar();
      char b[1000];
      gets(b);
      printf("I am Toorg!\n");
      a--;
  }

    return 0;
}
#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  getchar();
  while(a>0)
  {
      char b[1000];
      scanf(" %[^\n]",b);
      printf("I am Toorg!\n");
      a--;
  }

    return 0;
}
