#include<stdio.h>
int main()
{
    char a[27];
    char b[10100];
    scanf("%s",a);
    scanf("%s",b);
    for(int i = 0;b[i]!='\0';i++)
    {
        int n = b[i]-'a';
        //printf("%d\n",n);
        printf("%c",a[n]);
    }
   printf("\n");
    return 0;
}

