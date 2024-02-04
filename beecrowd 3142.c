#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
   char a[1001];
   while(scanf("%s",a)!=EOF)
   {
      long long int s = 0;
      int j;
      for(int i = (strlen(a)-1),j = 0;i>=0;i--,j++)
      {
          s+=((a[i]-'A')+1) * (long long int)pow(26,j);
      }
       if(s>16384) printf("Essa coluna nao existe Tobias!\n");
       else printf("%lld\n",s);
   }

    return 0;
}

