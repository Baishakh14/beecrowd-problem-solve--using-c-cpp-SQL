//Bismillahi Rahmanir Rahim
#include<stdio.h>
int main()
{
    int a;
    float s = 0;
    scanf("%d",&a);
    int n,m;
    while(a>0)
    {
    scanf("%d %d",&n,&m);
    if(n==1001)
    {
        s = s+(m*1.50);
    }
    if(n==1002)
    {
        s = s+(m*2.50);
    }
    if(n==1003)
    {
        s = s+(m*3.50);
    }
    if(n==1004)
    {
        s = s+(m*4.50);
    }
    if(n==1005)
    {
        s = s+(m*5.50);
    }
    a--;
    }
    printf("%.2f\n",s);
    return 0;
}

