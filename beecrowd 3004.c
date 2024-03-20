#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
       int a,b,c,d;
       scanf("%d %d %d %d",&a,&b,&c,&d);
       if((a<c && b<d)||a<d && b<c) printf("S\n");
       else printf("N\n");


    }
    return 0;
}

