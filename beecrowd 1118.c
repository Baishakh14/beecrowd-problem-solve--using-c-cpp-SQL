#include<stdio.h>
double avg(double n)
{
    printf("media = %.2lf\n",n/2);
    return 0;
}
int main()
{
   int c=0;
   double s = 0;
   while(1)
   {
   double a;
       k:
       scanf("%lf",&a);
       if(a<0||a>10)
       {
           printf("nota invalida\n");
       }
       else
       {
           s = s+a;
           c++;
       }
       if(c==2)
       {
           avg(s);
           c = 0;
           s = 0;
       i:
       printf("novo calculo (1-sim 2-nao)\n");
       int n;
       scanf("%d",&n);
       if(n==1)
       {
           goto k;
       }
       else if(n==2)
       {
           //return 0;
          exit(0);
       }
       else
        goto i;
       }
       }
    return  0;
}

