//#include<stdio.h>
//#include<string.h>
//int main()
//{
//  int c = 0;
//  int n;
//  scanf("%d",&n);
//  //getchar();
//  while(n--)
//  {
//      char a[1001];
//      //scanf("%[^\n]%*c",a);
//      scanf(" %s",a);
//      int l = strlen(a);
//      for(int i = 0;i<l;i++)
//      {
//          if(a[i]=='C'&&a[i+1]=='D') break;
//          else if(l==(i+1)) c++;
//      }
//  }
//      printf("%d\n",c);
//    return 0;
//}
#include<stdio.h>
#include<string.h>
int main()
{
   int n;
   scanf("%d",&n);
   int c = 0;
   while(n>0)
   {
      char a[1001];
      scanf("%s%*c",a);
       if(strstr(a,"CD")=='\0') c++;
       n--;
   }
   printf("%d\n",c);
    return 0;
}

