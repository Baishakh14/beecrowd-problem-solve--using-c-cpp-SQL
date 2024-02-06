#include<stdio.h>
int main()
{
   int i = 97;
   int a[26];
   for(int j = 0;j<26;j++)
   {
       a[j] = i++;
   }
   for(int j = 0;j<26;j++)
   {
       printf("%d e %c\n",a[j],a[j]);
   }
    return 0;
}
///Both are right
//#include<stdio.h>
//int main()
//{
//for(int i = 97;i<97+26;i++)
//{
//    printf("%d e %c\n",i,i);
//}
//    return 0;
//}

