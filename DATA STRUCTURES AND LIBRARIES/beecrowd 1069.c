#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        char a[1001];
        scanf("%s",a);
        int td = 0;
        int e = 0,s = 0;
        for(int i = 0;a[i] != '\0';i++)
        {
            if(a[i] == '<') s++;
            else if(a[i] == '>')
            {
                e++;
                if(s>0)
                {
                    s--;
                    e--;
                    td++;
                }
            }
        }
        printf("%d\n",td);
    }
    return 0;
}


