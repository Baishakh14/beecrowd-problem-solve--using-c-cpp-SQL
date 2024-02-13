#include<stdio.h>
int c;
int fib(int n)
{
    c++; ///counter global variable
    if(n==0) return 0;
    if(n==1) return 1;
    int s = fib(n-1)+fib(n-2);///only plus the first two;
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a;
        c = -1;
        scanf("%d",&a);
        printf("fib(%d) = %d calls = %d\n",a,c,fib(a)); ///why counter is global so
        ///from anywhere and it will work from golbal and no problem;
    }

    return 0;
}

