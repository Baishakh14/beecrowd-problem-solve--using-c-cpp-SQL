#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);///number of university
  int a[n];
  int s = 0;
  for(int i = 0;i<n;i++)
  {
      scanf("%d",&a[i]); ///taking the number of students in i'th university
      int c = a[i]/3;
      int d = c*3; ///find the maximum 3 team they build with rounnd
      ///that mean extra team member after 3 divide is out
      s+=d; ///store them in sum;
  }
  printf("%d\n",s);
    return 0;
}

