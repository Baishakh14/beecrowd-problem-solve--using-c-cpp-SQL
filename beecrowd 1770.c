#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a,b;
    int cd;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        int bc[b];
        int tm = 0;
        int c = 1;
        int n[a];
        for(int i = 0;i<a;i++)
        {
            scanf("%d",&n[i]);
        }
        int m[a];
        for(int i = 0;i<a;i++)
        {
            m[i] = 0;
        }
        bool x[b];
        for(int i = 0;i<b;i++)
        {
            int ab;
            scanf("%d",&ab);
            bc[i] = ab-1;
            m[ab-1] = ab;
            //x[m[i]] = true;
        }
//        int c = 1;
        for(int i = 0;i<a;i++)
        {
            if(m[i] == 0) c = 0;
        }
        if(c==0)
        {
            printf("-1\n");
            continue;
        }
        for(int i = 0;i<b;i++)
        {
            cd = i;
            m[bc[i]] = 0;
            int x = 0;
            for(int j = 0;j<a;j++)
            {
                if(m[j] != 0) x = 1;
            }
           if(x)
           {
               tm += n[bc[i]];
               //printf("%d\n",n[bc[i]]);
               //printf("%d\n",tm);
               //printf("      %d\n",i);
           }
           if(x==0) break;
        }
//        printf("          %d\n",cd);
        tm+=n[bc[cd]];
       printf("%d\n",tm);
    }
    return 0;
}

