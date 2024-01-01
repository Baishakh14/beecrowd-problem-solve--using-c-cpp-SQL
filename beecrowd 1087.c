#include<stdio.h>///1087 - Queen
#include<math.h>
int main()
{
  int a,b,c,d;
  while(scanf("%d %d %d %d",&a,&b,&c,&d)==4&&(a||b||c||d))///a c for queen row and colom b d is queen destination
  {
      if((a==c)&&(b==d))
      {
          printf("0\n");///qeen and destination is in same position by subtracting both of their colom and row
      }
      else if(abs(a-c)==abs(b-d))///check is destination is the diogonal of queen
      {
          printf("1\n");///then need only 1 step
      }
      else if(a==c||b==d) ///check if destinatiion is straight to the queen
      {
          printf("1\n");
      }
      else printf("2\n");///other wise it need 2 step
  }
    return 0;
}

