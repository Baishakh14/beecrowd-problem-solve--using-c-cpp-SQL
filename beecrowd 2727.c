#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        getchar();
     while(n--)
     {
         char a[51];
         scanf("%[^\n]%*c",a);
         int s = 0;/// space
         int c = 96; ///count for char
         for(int i = 0;a[i]!='\0';i++)
         {
             if(a[i]==' ') s++;
         }
         for(int i = 0;a[i]!='\0';i++)
         {
             if(a[i]==' ') break;
             else c++;
         }
         if(s<1) printf("%c\n",(char)c);
         else
         {
             printf("%c\n",3*s+c);
         }

     }

    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        getchar();
     while(n--)
     {
         char a[51];
         scanf("%[^\n]%*c",a);
         int s = 0;/// space
         int c = 96; ///count for char
         for(int i = 0;a[i]!='\0';i++)
         {
             if(a[i]==' ') s++;
         }
         for(int i = 0;a[i]!='\0';i++)
         {
             if(a[i]==' ') break;
             else c++;
         }
         if(s<1) printf("%c\n",(char)c);
         else
         {
             printf("%c\n",3*s+c);
         }

     }

    }
    return 0;
}

