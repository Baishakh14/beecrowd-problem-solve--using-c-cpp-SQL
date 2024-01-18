#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t = 0;
    for(int i = 0;i<n;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(b<a) t+=b;
    }
    printf("%d\n",t);
    return 0;
}

