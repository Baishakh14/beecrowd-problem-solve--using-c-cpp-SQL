#include<stdio.h>
int main()
{
  int n;
  int i = 0;
  while(scanf("%d",&n)&&n!=-1)
  {
    printf("Experiment %d: %d full cycle(s)\n",++i,n/2);
  }

    return 0;
}

