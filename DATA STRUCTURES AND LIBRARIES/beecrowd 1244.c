#include<stdio.h>
#include<string.h>
int main()
{
   int n;
   scanf("%d",&n);
   getchar();
   while(n--)
   {
   char ab[50][50];
   int i = 0;
   char *bc;
     char a[3000];
     scanf(" %[^\n]",a);
       bc = strtok(a," ");
       while(bc != NULL)
       {
           strcpy(ab[i],bc);
           bc = strtok(NULL," ");
           i++;
       }
       for(int j = 0;j<i-1;j++)
       {
           for(int x = 0;x<i-1-j;x++)
           {
               int s = strlen(ab[x]);
               int l = strlen(ab[x+1]);
               if(l>s)
               {
                   char abc[100];
                   strcpy(abc,ab[x]);
                   strcpy(ab[x],ab[x+1]);
                   strcpy(ab[x+1],abc);
               }
           }
       }
       for(int j = 0;j<i;j++)
       {
           printf("%s",ab[j]);
           if(j<i-1) printf(" ");
       }
       printf("\n");
   }

    return 0;
}

