#include<stdio.h>
int main()
{
    int n;
    int t = 1;
    while(scanf("%d",&n),n)
    {
       int a;
       scanf("%d",&a);
       int b;
       char c;
       for(int i = 1;i<n;i++)
       {
           scanf("%c %d",&c,&b);
           if(c=='+') a+=b;
           else if(c=='-') a-=b;
       }
       printf("Teste %d\n",t);
       printf("%d\n",a);
       printf("\n");
       t++;
    }

    return 0;
}

