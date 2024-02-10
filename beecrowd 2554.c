#include<stdio.h>
#include<string.h>
int main()
{
   int p,d;
   while(scanf("%d %d",&p,&d)!=EOF)
   {
           char a[100];
           char print[1001] = "0";
           int t = 1;
       for(int i = 0;i<d;i++)
       {
           scanf("%s",a);///taking the date
           int s = 0;
           for(int j = 0;j<p;j++)
           {
               int x;
               scanf("%d",&x);
               s+=x;
           }
           if(t&&s==p) ///check is all are presented
           {
               strcpy(print,a); ///if present than store it and others ignore
               t = 0;
           }

       }
       if(strcmp(print,"0")==0)
        printf("Pizza antes de FdI\n"); ///otherwise print not possible
       else printf("%s\n",print);
   }

    return 0;
}
