#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
   int n;
   scanf("%d",&n);
   while(n>0)
   {
     int s = 1;
       char a[100];
       scanf(" %s%*c",a);
       int l = strlen(a);
       for(int i = 0;i<l;i++)
       {
           a[i] = tolower(a[i]);
           if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='s')
            s*=3;
           else s*=2;
       }
       printf("%d\n",s);

       n--;
   }
    return 0;
}

