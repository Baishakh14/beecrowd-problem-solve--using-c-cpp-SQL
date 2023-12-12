#include<stdio.h>
int main()
{
   int a[50],b[50],num;
   int c = 0,d = 0;
   for(int i = 0;i<15;i++)
   {
       scanf("%d",&num);
       if(num%2==0)
       {
           a[c] = num;
           c++;
       }
       if(num%2!=0)
       {
           b[d] = num;
           d++;
       }
       if((d==5) || (i==14))
       {
           for(int i = 0;i<d;i++)
           {
               printf("impar[%d] = %d\n",i,b[i]);
           }
           d = 0;
       }
       if((c==5)||(i==14))
       {
           for(int i = 0;i<c;i++)
           {
               printf("par[%d] = %d\n",i,a[i]);
           }
           c = 0;
       }
   }
    return 0;
}

