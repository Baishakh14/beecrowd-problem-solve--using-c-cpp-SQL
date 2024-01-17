#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s = 0;
    for(int i = 0;i<n;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        s+=(a*b);
    }
    printf("%d\n",s);
    return 0;
}

