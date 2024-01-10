#include<stdio.h>
int main()
{
    int a = 0;
    double n,s = 0;
    char c[100];
    while(scanf(" %[^\n] %lf",c,&n)!=EOF)
    {
        s+=n;
        a++;
    }
    printf("%.1lf\n",s/a);
    return 0;
}

