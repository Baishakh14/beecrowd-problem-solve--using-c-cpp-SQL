#include<stdio.h>
int main()
{
    while(1){
int a,b;
scanf("%d %d",&a,&b);
if(a==0&b==0) break;
int c = a+b;
int r = 0;
int g = 1;
while(c!=0)
{
    int d = c%10;
    if(d!=0)
    {
       r+=d*g;
       g*=10;
    }
    c/=10;
}
printf("%d\n",r);
    }

   return 0;
}

