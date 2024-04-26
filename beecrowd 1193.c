#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void bin(char a[])
{
   int d = 0;
   int p = 0;
   int n = strlen(a);
   for(int i = n-1;i>=0;i--)
   {
     d = d+((a[i]-'0')*(int)pow(2,p));
     p++;
   }
   printf("%d dec\n",d);
   printf("%x hex\n\n",d);
}

void dec(char a[])
{
    int c = atoi(a);
    printf("%x hex\n",c);
    int ab[100];
    int i;
    for(i = 0;c!=0;i++)
    {
        int x = c%2;
        ab[i] = x;
        c/=2;
    }
//    printf("%d",i);
i-=1;
while(i>=0)
{
    printf("%d",ab[i]);
    i--;
}
printf(" bin\n\n");
}

void hex(char a[])
{
    int n = strlen(a);
    int num = 0;
    int p = 0;
    for(int i = n-1;i>=0;i--)
    {
        if(a[i]>=97)
        {
            num = num + ((a[i]-87)*(int)pow(16,p));
        }
        else num = num + ((a[i]-'0')*(int)pow(16,p));
        p++;
    }
    printf("%d dec\n",num);
    int ab[100];
    int co = 0;
    while(num!=0)
    {
        int x = num%2;
        ab[co] = x;
        num/=2;
        co++;
    }
    for(int i = co-1;i>=0;i--)
    {
        printf("%d",ab[i]);
    }
    printf(" bin\n\n");
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        char a[100],b[100];
        scanf("%s %s",a,b);
        printf("Case %d:\n",i);
        if(strcmp(b,"bin")==0)
        {
            bin(a);
        }
        else if(strcmp(b,"dec")==0)
        {
           dec(a);
        }
        else if(strcmp(b,"hex")==0)
        {
            hex(a);
        }
    }
    return 0;
}

