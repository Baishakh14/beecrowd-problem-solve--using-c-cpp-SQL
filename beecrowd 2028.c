#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,o=0;
    while(scanf("%d",&n)!=EOF)
    {
        o++;
        k = 1;
    for(i = 1;i <= n;i++)
    {
        for(j = i;j > 0;j--)
        {
            k++;
        }
    }
    if(n==0)
    {
        printf("Caso %d: %d numero\n",o,k);
    }
    else printf("Caso %d: %d numeros\n",o,k);
printf("0");
    for(i = 1;i <= n;i++)
    {
        for(j = i;j > 0;j--)
        {
            printf("% d",i);
        }
    }
        printf("\n\n");
    }

    return 0;
}

