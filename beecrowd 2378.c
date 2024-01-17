#include<stdio.h>
#include<stdbool.h>
int main()
{
    _Bool c = true;
    int a,b;
    scanf("%d %d",&a,&b); ///b is the limit and a is the total flaat
    int t = 0;
    for(int i = 0;i<a;i++)
    {
        int s,e;
        scanf("%d%d",&s,&e);///taking the exited and entered people
        t+=e;///adding the entered people
        t-=s;///remvoing the exiting people
        if(t>b) c = false; ///if total number is exceeding than limit b then c is false;
    }
    if(c) printf("N\n");
    else printf("S\n");
    return 0;
}

