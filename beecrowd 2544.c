#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int x = 0;
        while(n>1)
        {
            x++;
            n/=2;
        }
        printf("%d\n",x);
    }

    return 0;
}

