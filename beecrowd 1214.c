#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 while(n--)
 {
     int a;
     scanf("%d",&a);
     int b[a];
     double s = 0,c = 0;
     for(int i = 0;i<a;i++)
     {
         scanf("%d",&b[i]);
         s+=b[i];
     }
     s/=a;
     for(int i = 0;i<a;i++)
     {
         if(b[i]>s) c++;
     }
printf("%.3f%%\n",c/a*100);

 }


    return 0;
}

