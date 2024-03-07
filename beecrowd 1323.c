#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n),n)
    {
        int t = 0;
        for(int i = 1;i<=n;i++)
        {
            t+=(i*i);
        }
        printf("%d\n",t);
    }

    return 0;
}

