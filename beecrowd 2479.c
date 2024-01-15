#include<stdio.h>
#include<string.h>
int main()
{
    int g = 0,b = 0;
    int n;
    scanf("%d",&n);
    char a[n][20];
    char c;
    for(int i = 0;i<n;i++)
    {
       scanf(" %c",&c);
       scanf(" %[^\n]",a[i]);
       if(c =='+') g++;
       if(c =='-') b++;
    }
    char t[100];
    for(int i = 0;i<n;i++)
    {
        for(int j= i+1;j<n;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
                strcpy(t,a[j]);
                strcpy(a[j],a[i]);
                strcpy(a[i],t);
            }
        }
    }
        for(int i = 0;i<n;i++)
    {
       printf("%s\n",a[i]);
    }
    printf("Se comportaram: %d | Nao se comportaram: %d\n",g,b);
    return 0;
}

