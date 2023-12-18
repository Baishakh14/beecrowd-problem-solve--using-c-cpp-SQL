#include<stdio.h>
int main()
{
    while(1)
        {
    int N,M;
         scanf("%d %d",&N,&M);
         getchar();
         if(N==0 && M==0) break;
         char a[100][100];
         for(int i = 0;i<N;i++)
         {
             scanf("%s%*c",a[i]);
         }
          int n,m;
          scanf("%d%d",&n,&m);
          n = n/N;
          m = m/M;
          for(int i = 0;i<N;i++)
          {
              char *p = a[i];
              for(int j = 0;j<n;j++)
              {
                  for(int k = 0;p[k]!=NULL;k++)
                  {
                      for(int l = 0;l<m;l++)
                      {
                          printf("%c",p[k]);
                      }
                  }
                  printf("\n");
              }
          }
              printf("\n");

        }



    return 0;
}

