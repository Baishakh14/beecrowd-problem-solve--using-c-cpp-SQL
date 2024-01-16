#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int s = 0;
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    s = s/2;
    int c = 0;
    int i;
    for(i = 0;i<n;i++)
    {
        s-=a[i];
        if(s==0) break;
        c++;
    }
    printf("%d\n",i+1);
    return 0;
}

