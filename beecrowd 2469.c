#include<stdio.h>
int main()
{
   int a;
  scanf("%d",&a);
   int arr[a];
 for(int i = 0;i<a;i++)
 {
    scanf("%d",&arr[i]);
 }
 int max_number = 0;
 int max = 0;
 for(int i = 0;i<a;i++)
 {
     int c = 0;
     for(int j = i+1;j<a;j++)
     {
         if(arr[i]==arr[j])
         {
             c++;
         }
     }
     if(c>max)
     {
         max = c;
         max_number = arr[i];
     }
     if(c==max)
     {
         if(arr[i]>max_number) max_number = arr[i];
     }
 }
 printf("%d\n",max_number);
    return 0;
}

