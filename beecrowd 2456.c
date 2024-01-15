#include<stdio.h>
int main()
{
    int a[5];
    for(int i = 0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int co = 0;
    int c = 0;
    for(int i = 1;i<5;i++)
    {
       if(a[i]>a[i-1]) co++;
       if(a[i-1]>a[i]) c++;
    }
    if(c==4) printf("D\n");
    else if(co==4) printf("C\n");
    else printf("N\n");

    return 0;
}

