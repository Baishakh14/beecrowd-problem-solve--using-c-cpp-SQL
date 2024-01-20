#include<stdio.h>
#include<string.h>
//int fac(int a)
//{
//    if(a==0||a==1) return 1;
//    else
//        return (a*fac(a-1));
//}
int main()
{
  while(1)
  {
      unsigned long long f = 1; ///can store the longest possible number in c
      char a[20];
      scanf("%s",a);
     if(a[0]=='0') break;
      int l = strlen(a);
      while(l)
      {
          f*=l--;
      }
      printf("%llu\n",f); /// to print this its format specifiar %llu
  }
    return 0;
}

