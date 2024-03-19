#include<stdio.h>
#include<stdbool.h>
int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
bool ptyha(int a,int b,int c)
{
    if((c*c) == (a*a)+(b*b))
    return true;
    else
        return false;
}
int main()
{
   int a,b,c;
   while(scanf("%d %d %d",&a,&b,&c)!=EOF)
   {

   if((ptyha(a,b,c)||ptyha(a,c,b)||ptyha(b,c,a))&&(gcd(gcd(a,b),c))==1)
        printf("tripla pitagorica primitiva\n");

   else if((ptyha(a,b,c)||ptyha(a,c,b)||ptyha(b,c,a))&&(gcd(gcd(a,b),c))!=1)
    printf("tripla pitagorica\n");
   else printf("tripla\n");

   }
    return 0;
}

