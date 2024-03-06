#include<stdio.h>
#include<math.h>
int nod(long long a) ///find number of digit
{
    int c = 0;
    while(a)
    {
       c++;
       a/=10;
    }
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        long long int a,b;
        scanf("%lld %lld",&a,&b);
        int d = nod(b);
        //printf("%d",d);
        d = pow(10,d);
        if(a%d==b) printf("encaixa\n");
        else printf("nao encaixa\n");

    }

    return 0;
}

