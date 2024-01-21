#include<stdio.h>
int f(int a)
{
    if(a==1||a==0) return 1;
    else return a*f(a-1);
}
int main()
{
    int n,a,t,c = 0;
    scanf("%d",&n);
    for(int i = 8;i>=0;i--)
    {
        a = f(i);
        t = (int)n/a;
        n-=t*a;
        c+=t;
    }
  printf("%d\n",c);
    return 0;
}

