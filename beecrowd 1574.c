#include<stdio.h>
#include<string.h>
int main()
{
   int n;
   scanf("%d",&n);
   while(n--)
   {
       int x = 0;
       int a;
       scanf("%d",&a);
       int b[a];
        int d;
       for(int i = 0;i<a;i++)
       {
           char s[10];
           scanf("%s ",s);
           if(strcmp(s,"LEFT")==0)
           {
               x-=1;
               //printf("%d\n",x);
               b[i] = -1;
           }
          else if(strcmp(s,"RIGHT")==0)
           {
               x+=1;
              // printf("%d\n",x);
               b[i] = 1;
           }
           else
           {
               scanf("AS %d",&d);
               x+=b[d-1];
               // printf("%d\n",x);
               b[i] = b[d-1];
           }
       }
       printf("%d\n",x);
   }
    return 0;
}

