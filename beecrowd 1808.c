#include<stdio.h>
int main()
{
   char s[1001];
   scanf("%s",s);
   int a[1001];
   int i = 0,j = 0;
   int count_zero = 0;
   int sum = 0;
   while(s[j]!='\0' && s[j]!='\n')
   {
       if(s[j]!='0')
       {
           a[i] = s[j]-'0';
           i++;
       }
       else count_zero++;
       j++;
   }
   for(int k = 0;k<i;k++)
   {
       sum += a[k];
   }
    sum = sum - count_zero + 10 * count_zero;
   double ab = (double)sum / i;
    printf("%.2lf\n",ab);
    return 0;
}

