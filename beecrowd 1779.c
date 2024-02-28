#include<stdio.h>
#include<math.h>
int main()
{
  int t;
  scanf("%d",&t); ///the test case total
  int cas = 0; ///make testcase number 0;
  while(t--)
  {
      int max = 0,c = 0,r = 0;
      int a;
      scanf("%d",&a); ///how many exam he did
      int b[a];
      for(int i = 0;i<a;i++)
      {
          scanf("%d",&b[i]); ///taking the cgpa in ith semester and find the maximum number by fmax function conatin in math library
          max = fmax(max,b[i]); ///store maximum number in max variable;
      }
      for(int i = 0;i<a;i++)
      {
          if(b[i]==max) c++; ///if contigious highest cg then total counter ++;
          else c = 0; /// else make c = 0 notoba seita ager theke count korbe contigious hobe na;
          r = fmax(r,c); ///store maximum contigious value in r;
      }
      printf("Caso #%d: ",++cas); ///print case number by pre increment ++cas;
      printf("%d\n",r); ///maximum contigious cgpa;
  }

    return 0;
}

