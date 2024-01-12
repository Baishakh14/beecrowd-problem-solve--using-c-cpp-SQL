#include<stdio.h>
int main()
{
   int c;
   int n = 0;
   while(scanf("%d",&c)!=EOF)
   {
       int t = 0;
       int a,f = 0,m = 0;
       char b,e;
       scanf("%d",&a);
       scanf(" %c",&b);
       scanf("%c",&e);
       if(n!=0) printf("\n");
       if(a==c)
       {
           t++;
           if(b=='F') f++;
           else if(b=='M') m++;
       }
       while(e!='\n')
       {
           scanf("%d %c%c",&a,&b,&e);
        if(a==c)
       {
           t++;
           if(b=='F') f++;
           else if(b=='M') m++;
       }
       }
       n++;
       printf("Caso %d:\n",n);
       printf("Pares Iguais: %d\n",t);
       printf("F: %d\n",f);
       printf("M: %d\n",m);
   }
    return 0;
}

