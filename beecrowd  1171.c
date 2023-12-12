#include<stdio.h>
int main()
{
 int n,x,c[2001],i;
 scanf("%d",&n);
 for(i=0;i<=2000;i++)
 {
     c[i] = 0;
 }
 for(i=0;i<n;i++)
 {
     scanf("%d",&x);
     c[x]++;
 }
 for(i=1;i<=2000;i++)
 {
     if(c[i]>0)
     {
         printf("%d aparece %d vez(es)\n",i,c[i]);
     }
 }

    return 0;
}
