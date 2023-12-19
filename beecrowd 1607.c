#include<stdio.h>
#include<string.h>
main()
{
  int n;
  scanf("%d",&n);
  while(n>0)
  {
   char a[10010];
   char b[10010];
   int c;
   int d = 0;
   int x,y;
   scanf("%s%*c %s%*c",a,b);///taking string and removing new line
    int l = strlen(a);
    for(int i = 0;i<l;i++)
    {
        x = a[i]-'a';
        y = b[i]-'a';
        if(x>y)
        {
          c = (26-x)+y;
        }
        else c = y-x;
        d+=c;

    }
    printf("%d\n",d);
      n--;
  }



    return 0;
}

