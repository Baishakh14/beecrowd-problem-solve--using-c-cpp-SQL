#include<stdio.h>
#include<string.h>
int main()
{
  int n;
  char a[101];
  int i,j;
  scanf("%d",&n);
  getchar();
  while(n>0)
  {
    //scanf("%[^\n]",a);
    gets(a);
    i = strlen(a);
    j = i/2;
    for(int x = j-1;x>=0;x--)
    {
        printf("%c",a[x]);
    }
    for(int l = i-1;l>=j;l--)
    {
        printf("%c",a[l]);
    }
printf("\n");
      n--;
  }
    return 0;
}

