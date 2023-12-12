#include<stdio.h>
int main()
{
    int j = 0;
  char a[1000];
  scanf("%s",a);
  for(int i = 0;a[i]!='\0';i++)
  {
      if(a[i]=='1')
      {
          j++;
      }
      printf("%c",a[i]);
  }
  if(j%2==0)
  {
      printf("0\n");
  }
  else
    printf("1\n");

    return 0;
}

