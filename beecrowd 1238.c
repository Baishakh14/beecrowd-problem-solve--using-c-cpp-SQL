//Bismillahi Rahmanir Rahim
#include<stdio.h>
#include<string.h>
int main()
{
   int n;
   scanf("%d",&n);
   getchar();
   while(n>0)
   {
       char a[51];
       char b[51];
       scanf(" %s",a);
       scanf(" %s",b);
       int al = strlen(a);
       int bl = strlen(b);
       int i;
       for(i=0;i<al&&i<bl;i++)
       {
            printf("%c%c",a[i],b[i]);
       }
       if(i<al)
       {
           while(i<al)
           {
               printf("%c",a[i]);
               i++;
           }
       }
       if(i<bl)
       {
           while(i<bl)
           {
               printf("%c",b[i]);
               i++;
           }
       }
       printf("\n");
       n--;
   }

    return 0;
}

