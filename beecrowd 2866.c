#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[100];
    while(n>0)
    {
        scanf(" %s",a);
        int l = strlen(a);
        for(int i = l-1;i>=0;i--)
        {
            if(a[i]>=97 && a[i]<=122)
            {
                printf("%c",a[i]);
            }
        }
        printf("\n");

        n--;
    }

    return 0;
}

