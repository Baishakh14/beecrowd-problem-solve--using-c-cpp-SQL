#include<stdio.h>
#include<string.h>
int main()
{
  char a[1001];
  while(scanf("%s",a)!=EOF)
  {
     int s = strlen(a);
     int t = s;
     int k;
     for(int i = 0;i<s;i++)
     {
         for(int j = 0;j<i;j++)
         {
             printf(" ");
         }
         for(k = 0;k<t-1;k++)
         {
             printf("%c ",a[k]);
         }
         printf("%c\n",a[k]); ///not space after last word;
         t--; ///remove from last;
     }
     printf("\n");
  }

    return 0;
}

