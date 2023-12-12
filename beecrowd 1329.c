#include<stdio.h>
int main()
{
int a;
while(scanf("%d",&a)==1)
{
    if(a==0)
        return 0;
    int hc = 0;
    int tc = 0;
    for(int i = 0;i<a;i++)
    {
        int b;
        scanf("%d",&b);
        if(b==0)
        {
            hc++;
        }
        else if(b==1)
        {
            tc++;
        }
    }
    printf("Mary won %d times and John won %d times\n",hc,tc);
}
    return 0;
}

