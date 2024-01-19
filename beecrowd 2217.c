#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        if(a%2==0) printf("1\n");
        else printf("9\n");
    }
}

