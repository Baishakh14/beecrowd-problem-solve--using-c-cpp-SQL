#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);///number of test case
  while(n--){
  int x;
  scanf("%d",&x); ///how many number user want to store in array with odd and even
  int a[x]; ///main array
  int b[x]; ///big to small odd number from main array
  int c[x]; ///small to big odd number from main array
  int k = 0,l = 0; ///l for big to small odds array k for small to big odds array
  for(int i = 0;i<x;i++)
  {
      scanf("%d",&a[i]); ///taking number from user and store in array a;
  }
   for(int i = 0;i<x;i++)
   {
       for(int j = i+1;j<x;j++)
       {
           if(a[j]>a[i])
           {
               int t = a[j];
               a[j] = a[i];
               a[i] = t; /// sorting them from big to small
           }
       }
   }
   for(int i = 0;i<x;i++)
   {
      if(a[i]%2!=0) ///taking only odd numbers
      {
          b[k] = a[i];///big to small odd number
          k++;
      }
   }
   for(int i = k-1;i>=0;i--)
   {
       c[l] = b[i]; ///c small to big odd number
       l++;
   }

   if(l%2!=0){
    l = l/2+1;
    k = k-l;
       for(int i = 0;i<l||i<k;i++)
   {
       if(i<l) printf("%d",b[i]);
       if(i<l-1) printf(" "); ///giving proper space without space after last number
       if(i<k) printf("%d ",c[i]);
   }
  ///printf("l"); check is space are proper or not
   printf("\n");
   }
   else
   {
       l = l/2;
   for(int i = 0;i<l;i++)
   {
       printf("%d ",b[i]);
       printf("%d",c[i]);
       if(i<l-1) printf(" ");///giving proper space without space after last number
   }
  ///printf("l"); check is space are proper or not
   printf("\n");
   }
  }
    return 0;
}

