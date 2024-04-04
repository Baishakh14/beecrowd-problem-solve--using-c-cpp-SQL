#include<stdio.h>
int main()
{
   int a,b,c,d;
   scanf("%d %d %d %d",&a,&b,&c,&d);
   if(b%2==0 || c%2==0)
   {
               if (d % 2 == 0) {
            printf("Direita\n");
        } else {
            printf("Esquerda\n");
   }
   }
    else {
        if (d % 2 == 0) {
            printf("Esquerda\n");
        } else {
            printf("Direita\n");
        }
    }

    return 0;
}
