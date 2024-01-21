#include<stdio.h>
int main()
{
  int p,r; ///player and round;
  while(scanf("%d %d",&p,&r)!=EOF)
  {
  int a[p];
    for(int i = 0;i<p;i++)
    {
        a[i] = 0;
    }
    for(int i = 0;i<p*r;i++)
    {
        int x;
        scanf("%d",&x);
        a[i%p]+=x;
    }
    int b = a[0];
    int pos = 0;
    for(int i = 1;i<p;i++)
    {
        if(a[i]>=b)
        {
            b = a[i];
            pos = i;
        }
    }
    printf("%d\n",pos+1);
  }

    return 0;
}

