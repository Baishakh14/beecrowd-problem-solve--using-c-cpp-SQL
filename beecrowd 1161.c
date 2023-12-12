#include<stdio.h>
long long int fact(long long int a)
{
    if(a==0||a==1)
        return 1;
    else
        return a*fact(a-1);
}
int main()
{
    long long int a,b;
    while(scanf("%lld %lld",&a,&b)!=0){
            long long int s = 0;
    s = fact(a)+fact(b);
    printf("%lld\n",s);
    }
    return 0;
}

