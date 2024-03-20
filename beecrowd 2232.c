#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a;
        scanf("%d",&a);
        unsigned long long s = 0;
        for(int i = 0;i<a;i++)
        {
            s+=(int)pow(2,i);
        }
        printf("%llu\n",s);
    }

    return 0;
}

