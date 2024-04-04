#include<stdio.h>
#include<stdbool.h>
int main()
{
  int n;
  scanf("%d",&n);
  while(n--)
  {
      int a[6];
      bool dice = true;
      bool ab[7];
      for(int i = 0;i<=6;i++)
      {
          ab[i] = false;
      }
      for(int i = 0;i<6;i++)
      {
          scanf("%d",&a[i]);
          if(a[i]<1 || a[i]>6) dice = false;
          else
          {
              if(!ab[a[i]])
              {
                  ab[a[i]] = true;
              }
              else dice =  false;
          }
      }
      if(dice)
      {
          if((a[0]+a[5]==7)&& (a[1]+a[3]==7) && (a[2]+a[4]==7))
            printf("SIM\n");
          else printf("NAO\n");
      }
      else printf("NAO\n");
  }

    return 0;
}

