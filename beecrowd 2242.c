#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int j = 0,k = 0;
    scanf("%s",a);
    int l = strlen(a);
    for(int i = 0;i<l;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            b[j] = a[i];
            j++;
        }
    }
    b[j] = '\0'; ///add null so that it is a string
    int x = strlen(b);
    for(k = x-1,j = 0;k>=0;k--,j++)
    {
       if( b[k] != b[j]){
       printf("N\n");
    return 0;
       }
}
printf("S\n");
    return 0;
}

