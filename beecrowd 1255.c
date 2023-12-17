#include<stdio.h>
#include<string.h>
int main()
{
   int n;
   scanf("%d",&n);
   getchar();
   while(n>0)
   {
   char a[200];
   scanf(" %[^\n]%*c", a); ///remove the new line by %*c
    int l = strlen(a);
    int alpha[128] = {0};
    int max = 0;
    for(int i = 0;i<l;i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            alpha[a[i]+32]++; ///converting uppercase into lower case and increament value of their indx number 1,2,3
        }
        else alpha[a[i]]++;  ///same here
    }
    for(int i = 97;i<=122;i++)
    {
        if(alpha[i]>max)
        {
            max = alpha[i]; ///taking the max number
        }
    }
    for(int i = 97;i<=122;i++)
    {
        if(max==alpha[i])
        {
            printf("%c",i); /// print them by accending order using ASCII
        }
    }
    printf("\n");
    n--;
   }


    return 0;
}
