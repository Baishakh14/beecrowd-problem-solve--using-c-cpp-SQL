#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0) return a;  ///greatest common divisior
    while(b!=0)
    {
        int t = b;
        b = a%b;
        a = t;
    }
    return a;
}
int main()
{
int n;
scanf("%d",&n);
while(n--)
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",gcd(a,b));
}
    return 0;
}

