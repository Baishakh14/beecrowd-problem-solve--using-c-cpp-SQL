#include<stdio.h>
#include<string.h>
int main()
{
    int n1;
    scanf("%d",&n1);
    while(n1>0)
    {
        int d = 0;
        int n;
        scanf("%d",&n);
        char a[51];
        for(int i = 0;i<n;i++)
        {
            scanf("%s%*c",a);
            int l = strlen(a);
            for(int j = 0;j<l;j++)
            {
                int s = ((a[j]-'A')+i+j);
                d+=s;
            }
        }
        printf("%d\n",d);
        n1--;
    }
    return 0;
}

