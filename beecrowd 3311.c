#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[n][101];
    for(int i = 0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    for(int i = 0; i<n-1 ;i++)
    {
        for(int j = 0; j<n-i-1 ;j++)
        {
            if(a[j][0]>a[j+1][0])
            {
                char t[100];
                strcpy(t,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],t);
            }
        }
    }
    for(int i = 0;i<n;i++)
    {
        printf("%s\n",a[i]);
    }
    return 0;
}

