#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%b==0)
    {
        for(int i = 0;i<b;i++)
        {
            printf("%d\n",a/b);
        }
    }
    else
    {
        int n = a%b;
        int m = a/b;
        for(int i = 0;i<b;i++)
        {
            if(i<n) printf("%d\n",m+1);
            else printf("%d\n",m);
        }

    }


    return 0;
}
