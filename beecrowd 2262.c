#include<stdio.h>
#include<string.h>
int main()
{
  int n;
  scanf("%d",&n);
  char a[50];
  for(int i = 0;i<n;i++)
  {
      scanf("%s%*c",a);
      int l = strlen(a);
      if(l==3&&a[0]=='O'&&a[1]=='B') a[2] = 'I';
      if(l==3&&a[0]=='U'&&a[1]=='R') a[2] = 'I';
      printf("%s",a);
      if(i<n-1) printf(" ");
  }
printf("\n");

    return 0;
}

