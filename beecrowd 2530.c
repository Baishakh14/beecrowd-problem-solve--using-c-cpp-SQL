#include<stdio.h>
int main()
{
 int m,n;
 while(scanf("%d %d",&m,&n)!=EOF)
 {
 int ju[m],r[n]; ///juan and ricard
 for(int i = 0;i<m;i++) scanf("%d",&ju[i]); ///juan
 for(int i = 0;i<n;i++) scanf("%d",&r[i]); ///ricard;
 int x = 0;
 int i;
 for( i = 0;i<n;i++)
 {
     for(int j = 0;j<m;j++)
     {
         if(r[i]==ju[j])
         {
             i++;
             x++;
         }
     }
     break;
 }
 if(x==n) printf("sim\n");
 else printf("nao\n");
 }
    return 0;
}

