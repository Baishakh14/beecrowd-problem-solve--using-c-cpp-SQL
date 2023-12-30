#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int c = 0,m=0;///c mean carlos
    unsigned a;///also you can use unsigned int
    for(int i = 0;i<n;i++)
    {
        scanf("%u",&a);///taking the point of contentest
        if(i==0) c = a;///placing first point to carlos
        if(a>m) m = a;///finding the biggest point
    }
    if(m==c) printf("S\n");///if biggest point and carlos points are same then carlos win
    else printf("N\n");///else not

    return 0;
}

