#include<stdio.h>
#include<string.h>
void nums(int *a,int *b)  ///number swap
{
    int t = *a;
    *a = *b;
    *b = t;
}
void names(char a[],char b[])  ///name swap
{
    char t[101];
    strcpy(t,a);
    strcpy(a,b);
    strcpy(b,t);
}
int main()
{
  int n;
  while(scanf("%d",&n) != EOF)
  {
      char name[n][101];
      int num[n];
      for(int i = 0;i<n;i++)
      {
          scanf("%s %d",name[i],&num[i]);
      }
      for(int i = 0;i<n;i++)
      {
          for(int j = i+1;j<n;j++)
          {
              if(num[i]>num[j])
              {
                  nums(&num[i],&num[j]);
                  names(name[i],name[j]);
              }
          }
      }
      for(int i = 0;i<n;i++)
      {
          printf("%s",name[i]);
          if(i<n-1) printf(" ");
      }
      printf("\n");
  }

    return 0;
}

