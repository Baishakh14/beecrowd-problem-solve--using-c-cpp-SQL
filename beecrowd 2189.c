#include<stdio.h>
int main()
{
   int n;
   int b = 0;
   while(scanf("%d",&n)&&n)
   {
       int a[n];
        for(int i = 0;i<n;i++)
        {
            scanf(" %d",&a[i]);
        }
        printf("Teste %d\n",++b);
        for(int i = 0;i<n;i++)
        {
            if(i+1==a[i])
            {
                printf("%d\n",i+1);
                break;
            }
        }
        printf("\n");
   }
    return 0;
}

