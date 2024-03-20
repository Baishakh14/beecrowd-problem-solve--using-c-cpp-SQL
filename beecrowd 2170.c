#include<stdio.h>
int main()
{
   double a,b;
   int c = 0;
   double l;
   while(scanf("%lf %lf",&a,&b)!=EOF)
   {
       l = b-a;
       l*=100;
       l/=a;
       printf("Projeto %d:\n",++c);
       printf("Percentual dos juros da aplicacao: %.2lf %%\n",l);
       printf("\n");
   }

    return 0;
}

