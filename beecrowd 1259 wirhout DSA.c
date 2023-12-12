#include<stdio.h>
int main()
{
   int b,n,x = 0,f[100];
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
  for(int i = 0;i<n;i++)
  {
      for(int j = i+1;j<n;j++)
      {
          if(a[i]>a[j])
          {
              b = a[i];
              a[i] = a[j];
              a[j]=b;

          }
      }
  }
for(int i = 0;i<n;i++)
{
    if(a[i]%2==0)
    {
        printf("%d\n",a[i]);
    }
    else if(a[i]%2!=0)
    {
        f[x] = a[i];
        x++;
    }
}
for(int i = x-1;i>=0;i--)
{
    printf("%d\n",f[i]);
}
    return 0;
}

