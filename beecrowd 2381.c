#include<stdio.h>
#include<string.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    char n[a][21];
    for(int i = 0;i<a;i++)
    {
        scanf("%s",n[i]);
    }
        for(int i = 0;i<a;i++)
    {
       for(int j = i+1;j<a;j++)
       {
           if(strcmp(n[i],n[j])>0)
           {
               char t[21];
               strcpy(t,n[i]);
               strcpy(n[i],n[j]);
               strcpy(n[j],t);
           }
       }
    }
    printf("%s\n",n[b-1]);
    return 0;
}
