#include<stdio.h>
#include<string.h>
int main()
{
   int n;
   while(scanf("%d",&n)!=EOF)
   {
       int a;
       int ep=0,eh=0,in=0;
       char b[n][100];
       for(int i = 0;i<n;i++)
       {
           int c;
           scanf("%d %s",&c,b[i]);
       }
       for(int i = 0;i<n;i++)
       {
           if(strcmp(b[i],"EPR")==0) ep++;
           else if(strcmp(b[i],"EHD")==0) eh++;
           else in++;
       }
       printf("EPR: %d\n",ep);
       printf("EHD: %d\n",eh);
       printf("INTRUSOS: %d\n",in);
   }
    return 0;
}

