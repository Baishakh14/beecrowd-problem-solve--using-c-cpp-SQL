#include<stdio.h>
#include<math.h>
int r(int x,int y) /// (3x)² + y².
{
      return (pow((3*x),2)+y*y);

}
 int ba(int x,int y)  /// 2(x²) + (5y)².
{
     return (2*(x*x)+pow((5*y),2));
}
 c(int x,int y) /// -100x + y³.
{
     return (-100*x + (y*y*y));
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
       int a,b;
       scanf("%d %d",&a,&b);
       int raf = r(a,b);
       int bet = ba(a,b);
       int car = c(a,b);
       if(raf>bet&&raf>car) printf("Rafael ganhou\n");
       else if(bet>raf&&bet>car) printf("Beto ganhou\n");
       else if(car>bet&&car>raf) printf("Carlos ganhou\n");
    }
    return 0;
}

