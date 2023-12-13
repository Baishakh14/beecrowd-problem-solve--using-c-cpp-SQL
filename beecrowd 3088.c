#include<stdio.h>
#include<string.h>
int main()
{
   char a[10000];
   while(scanf(" %[^\n]",a)!=EOF)
   {
       int l = strlen(a);
       for(int i = 0;i<l;i++)
       {
           if(a[i]==' ' && (a[i+1] == ',' || a[i+1]=='.'))
           {
               for(int j = i; j < l; j++)
               {
                   a[j] = a[j+1];
               }
//   also work without these  l--; // Decrease the length of the string after removal
//          same     i--; // Check the current index again since characters shifted left
           }
       }
       printf("%s\n",a);
   }
   return 0;
}

