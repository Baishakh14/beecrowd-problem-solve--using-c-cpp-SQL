#include<stdio.h>
#include<string.h>
int main()
{
  int n;
  scanf("%d",&n);
 getchar();
  while(n>0)
  {
  char a[2001];
  long long int s = 0;
     //scanf("%s",a);
    gets(a);
   //scanf(" %[^\n]",a);
      int l = strlen(a);
      for(int i = 0;i<l;i++)
      {
          if(a[i]=='1')s = s+2;
          if(a[i]=='2')s = s+5;
          if(a[i]=='3')s = s+5;
          if(a[i]=='4')s = s+4;
          if(a[i]=='5')s = s+5;
          if(a[i]=='6')s = s+6;
          if(a[i]=='7')s = s+3;
          if(a[i]=='8')s=s+7;
          if(a[i]=='9')s = s+6;
          if(a[i]=='0')s = s+6;
      }
      printf("%lld leds\n",s);
      n--;
  }
    return 0;
}

