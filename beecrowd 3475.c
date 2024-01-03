#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
//char *s[] = {"zero", "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove"};
char s[10][100] = {"zero", "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove"};

char a[100];
scanf("%s",a);
int l = strlen(a);
int ab = 0;
for(int i = 0;i<l;i++)
{
    if(isdigit(a[i]))
    {
        ab++;
    }
}
if(ab)
{
    int b = atoi(a);
    if(ab>=0&&ab<=9) printf("%s\n",s[b]);
}
else
{
    for(int i = 0;i<10;i++)
    {
        if(strcmp(a,s[i])==0)
        {
            printf("%d\n",i);
        }
    }
}
    return 0;
}

