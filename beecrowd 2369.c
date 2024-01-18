#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t = 7;
    for(int i = 11;i<=n;i++)
    {
        if(i<=30) t+=1;
        else if(i<=100) t+=2;
        else if(i>100) t+=5; ///("i<100") also accepted i dnt know why?
    }
    printf("%d\n",t);

    return 0;
}

