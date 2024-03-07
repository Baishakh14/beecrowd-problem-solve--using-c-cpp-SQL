#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int b;
    while(scanf("%s %d",a,&b)!=EOF)
    {
        printf("$");
        int l1 = strlen(a);
//        int l2 = strlen(b);
        for(int i = 0;i<l1;i++)
        {
            if((l1-i)%3==0&&i>0) printf(",");
            printf("%c",a[i]);
        }
        printf(".");
        printf("%02d\n",b);
    }

    return 0;
}

