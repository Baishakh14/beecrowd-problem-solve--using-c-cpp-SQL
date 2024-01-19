#include<stdio.h>
#include<string.h>
int main()
{
   int n;
   scanf("%d",&n);
   char a[n][100];
   int g[n];
   int s[n];
   int b[n];
   for(int i = 0;i<n;i++)
   {
       scanf(" %s %d %d %d",a[i],&g[i],&s[i],&b[i]);
   }
   for(int i = 0;i<n;i++)
   {
       for(int j = i+1;j<n;j++)
       {
           if(g[j]>g[i])
           {
               int t;
               char c[100];
               t = g[j];
               g[j] = g[i];
               g[i] = t;
               t = s[j];
               s[j] = s[i];
               s[i] = t;
               t = b[j];
               b[j] = b[i];
               b[i] = t;
               strcpy(c,a[i]);
               strcpy(a[i],a[j]);
               strcpy(a[j],c);
           }
           else if((g[i]==g[j])&&(s[j]>s[i]))
           {
               int t;
               char c[100];
               t = s[j];
               s[j] = s[i];
               s[i] = t;
               t = b[j];
               b[j] = b[i];
               b[i] = t;
               t = g[j];
               g[j] = g[i];
               g[i] = t;
               strcpy(c,a[i]);
               strcpy(a[i],a[j]);
               strcpy(a[j],c);
           }
           else if((g[i]==g[j])&&(s[i]==s[j])&&(b[i]<b[j]))
           {
               int t;
               char c[100];
               t = s[j];
               s[j] = s[i];
               s[i] = t;
               t = b[j];
               b[j] = b[i];
               b[i] = t;
               t = g[j];
               g[j] = g[i];
               g[i] = t;
               strcpy(c,a[i]);
               strcpy(a[i],a[j]);
               strcpy(a[j],c);
           }
           else if((g[i]==g[j]&&s[i]==s[j]&&b[i]==b[j])&&strcmp(a[i],a[j])>0)
           {
               int t;
               char c[100];
               t = s[j];
               s[j] = s[i];
               s[i] = t;
               t = b[j];
               b[j] = b[i];
               b[i] = t;
               t = g[j];
               g[j] = g[i];
               g[i] = t;
               strcpy(c,a[i]);
               strcpy(a[i],a[j]);
               strcpy(a[j],c);
           }
       }
   }
      for(int i = 0;i<n;i++)
   {
       printf("%s %d %d %d\n",a[i],g[i],s[i],b[i]);
   }
    return 0;
}

