#include<stdio.h>
#include<math.h>
int main()
{
    int t = 1;
    int n;
    while(scanf("%d",&n),n)
    {
        printf("Teste %d\n%d\n\n",t++,(int)(pow(2,n)-1));
    }

    return 0;
}

