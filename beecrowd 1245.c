#include<stdio.h>
int main()
{
  int n;
  while(scanf("%d",&n)!=EOF)
  {
  int t = 0;
  int a[n];
  char b[n];
  for(int i = 0;i<n;i++)
  {
      scanf("%d %c",&a[i],&b[i]);
  }
for(int i = 0;i<n;i++)
{
    for(int j = i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            if(a[i]==0 && a[j]==0) continue; ///continue or break both are accepted
             else if(b[i]!=b[j])
            {
                t++;
                a[i] = 0;
                a[j] = 0;
            }
        }
    }
}
printf("%d\n",t);
  }
    return 0;
}

