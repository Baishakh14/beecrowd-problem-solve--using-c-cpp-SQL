#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a+b>c&&b+c>a&&a+c>b)printf("S\n");
    else if(b+c>d&&c+d>b&&b+d>c)printf("S\n");
    else if(a+c>d&&a+d>c&&d+c>a)printf("S\n");
    else if(a+b>d&&a+d>b&&b+d>a)printf("S\n");
    else printf("N\n");

    return 0;
}

