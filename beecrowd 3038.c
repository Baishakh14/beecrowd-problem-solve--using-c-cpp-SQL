#include<stdio.h>
#include<string.h>
int main()
{
    char a[256];
    while(scanf(" %[^\n]",a)!=EOF)
    {
        int l = strlen(a);
        for(int i = 0;i<l;i++)
        {
            if(a[i]=='@') printf("a");
            else if(a[i]=='&') printf("e");
            else if(a[i]=='!') printf("i");
            else if(a[i]=='*') printf("o");
            else if(a[i]=='#') printf("u");
            else printf("%c",a[i]);
        }
        printf("\n");
    }
    return 0;
}

