#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        float t[n];
        for(int i = 0;i<n;i++)
        {
            int a,b;
            scanf("%d %d",&a,&b);
            t[i] = (float)b/a;
        }
        printf("%d\n",1);
        float max = t[0];
        for(int i = 1;i<n;i++)
        {
            if(t[i]>max)
            {
                max = t[i];
             printf("%d\n",i+1);
            }
        }
    }
    return 0;
}

