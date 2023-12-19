#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int a = n/2;
        if(n%2!=0) a+=1;
        for(int i = 1;i<=a;i++)
        {
            for(int j = i;j<a;j++)
            {
                printf(" ");
            }
            for(int k = 1;k<=i;k++)
            {
                printf("*");
            }
            for(int l = i;l>1;l--)
            {
                printf("*");
            }
            printf("\n");
        }
   for (int in = 1; in <= 2; in++) {
        // Print spaces
        for (int s = in; s<a; s++) {
            printf(" ");
        }
        // Print stars
        for (int st= 1; st<= (2 * in - 1); st++) {
            printf("*");
        }
        printf("\n");
   }
   printf("\n");
    }
    return 0;
}

