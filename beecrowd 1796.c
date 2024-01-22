#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int o = 0;
 int no = 0;
 for(int i = 0;i<n;i++)
 {
     int a;
     scanf("%d",&a);
     if(a==1) no++;
     if(a==0) o++;
 }
   if(o>no) printf("Y\n");
   else printf("N\n");
    return 0;
}

