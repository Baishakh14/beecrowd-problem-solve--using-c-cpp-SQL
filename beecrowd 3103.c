#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
//        char b[10001];
//        int j = 0;
        char a[1001];
        scanf("%s",a);
        int l = strlen(a);
        for(int i = 0;i<l;i++)
        {
            for(int j = i+1;j<l;j++)
            {
                if(a[i]>a[j])
                {
                    char t;
                    t = a[i];
                    a[i] = a[j]; ///sorting the numbers
                    a[j] = t;
                }
            }
        }
    if(a[0]=='0')
    {
        for(int i = 1;i<l;i++)
        {
            if(a[i]!='0')
            {
                int t1;
                t1 = a[0]; ///check if first smaller is 0 then exchange it with next small number(after sorting)
                a[0] = a[i];
                a[i] = t1;
                break;
            }
        }
    }
    for(int i = 0;i<l;i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");
    }

    return 0;
}
