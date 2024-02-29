#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int ispo2(int n)
{
    if(n<=0&&n%2!=0) return 0;
    int a = (n&-n);
    if(a==n) return 1;
    return 0;
}
int biggest(int a,int b,int c)
{
    return fmax(fmax(a,b),c);
}
int main()
{
  int n;
  while(scanf("%d",&n),n)
  {
      int ui,ri,li;
      int u,r,l;
      u = r = l = 0;
      for(int i = 0;i<n;i++)
      {
          scanf("%d %d %d",&ui,&ri,&li);
          if(ispo2(ui))
          {
              if(biggest(ui,li,ri)==ui) u+=2;
              else u++;
          }
          if(ispo2(ri))
          {
              if(biggest(ui,li,ri)==ri) r+=2;
              else r++;
          }
          if(ispo2(li))
          {
              if(biggest(ui,li,ri)==li) l+=2;
              else l++;
          }
      }
      if(u>r&&u>l) printf("Uilton\n");
      else if(r>u&&r>l) printf("Rita\n");
      else if(l>r&&l>u) printf("Ingred\n");
      else printf("URI\n");

  }


    return 0;
}

