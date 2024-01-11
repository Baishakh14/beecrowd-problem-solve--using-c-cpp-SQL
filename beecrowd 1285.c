#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        int na = 0;
     for(int i = a;i<=b;i++)
     {
         int n = 0;
        char c[1000] = {0};
         sprintf(c,"%d",i); ///converting number into string
         for(int j = 0;c[j]!='\0';j++)
         {
             for(int k = j+1;c[k]!='\0';k++)
             {
                 if(c[j]==c[k]) n++; ///check is the numbers off others is same or not if same the n will increase by 1
             }
         }
         if(n==0) na++;
     }
      printf("%d\n",na);
    }
    return 0;
}

