#include<stdio.h>
int main()
{
  int ax,ay,bx,by,cx,cy,dx,dy,x,y;
  int n;
  scanf("%d",&n);
  while(n--)
  {
      scanf("%d%d%d%d%d%d%d%d%d%d",&ax,&ay,&bx,&by,&cx,&cy,&dx,&dy,&x,&y);
      if((x>=ax && y>=ay) &&(x<= cx&& y<=cy)) printf("1\n");
      else printf("0\n");
  }

    return 0;
}

