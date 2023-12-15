#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,b;
        char c;
        scanf("%d x %d", &a ,&b);
        for(int i = 5;i<=10;i++)
        {
            if(a==b)
            {
                printf("%d x %d = %d\n",a,i,a*i);
            }
            else
                printf("%d x %d = %d && %d x %d = %d\n",a,i,a*i,b,i,b*i);
        }
    }

    return 0;
}

