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
       scanf(" %s %d %d %d",a[i],&g[i],&s[i],&b[i]); ///taking the country and gold solver and bronze medel form user
   }
   for(int i = 0;i<n;i++)
   {
       for(int j = i+1;j<n;j++)
       {
           if(g[j]>g[i]) ///if gold has more privous then make it proper top position also all make all in same position.hole country name and all trophy is make its position
           {
               int t;
               char c[100];
               t = g[j];
               g[j] = g[i];
               g[i] = t; ///convert full 
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
           else if((g[i]==g[j])&&(s[j]>s[i])) ///if gold is equal and silver is more than the same logic will implement
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
           else if((g[i]==g[j])&&(s[i]==s[j])&&(b[i]<b[j])) ///if gold equal silver equal but bronze is more than previous and apply the same logic.samne whole position of with country and medels in that top position
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
           else if((g[i]==g[j]&&s[i]==s[j]&&b[i]==b[j])&&strcmp(a[i],a[j])>0) ///if gold silver and bronze is equal then check which country is first alphabatecly then apply the same logic
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
       printf("%s %d %d %d\n",a[i],g[i],s[i],b[i]); ///after converitng all them by logic then print it
   }
    return 0;
}

