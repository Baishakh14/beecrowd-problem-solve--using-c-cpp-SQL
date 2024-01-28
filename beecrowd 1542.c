#include<stdio.h>
int main()
{
   int mr,dd,ir;  ///mr = my read book,dd = day deffenrece,ir = if read page in per day;
   while(scanf("%d%d%d",&mr,&dd,&ir) && mr)
   {
       int x = (dd*(mr*ir)/(ir-mr)); ///
       if(x<=1)
       {
           printf("%d pagina\n",x);
       }
       else
        printf("%d paginas\n",x);
   }

    return 0;
}

