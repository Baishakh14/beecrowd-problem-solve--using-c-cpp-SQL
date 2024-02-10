#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int a,b,c,a1,b1,c1;
   float p1 = 0,p2 = 0,p3 = 0,x = 0,y = 0,z = 0;
   while(n--)
   {
       char name[100];
       scanf("%s",name);
       scanf("%d %d %d %d %d %d",&a,&b,&c,&a1,&b1,&c1);
       x+=a;
       y+=b;
       z+=c;
       p1+=a1;
       p2+=b1;
       p3+=c1;
   }
  x = (100/x)*p1;
  y = (100/y)*p2;
  z = (100/z)*p3;
  printf("Pontos de Saque: %.2f %%.\n",x);
  printf("Pontos de Bloqueio: %.2f %%.\n",y);
  printf("Pontos de Ataque: %.2f %%.\n",z);
    return 0;
}

