#include<stdio.h>
int main()
{
int n; ///how many people
while(scanf("%d",&n),n)
{
    int a[n];
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]); ///taking their number of minute;
    }
    int t = 10;
    for(int i = 1;i<n;i++)
    {
        if(a[i]-a[i-1]<=10) t+= (a[i]-a[i-1]); ///if deference is less then limit then plus the deference;
        else t+=10; ///else add the highest minute
    }
    printf("%d\n",t);
}


    return 0;
}

