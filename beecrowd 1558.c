#include<stdio.h>
#include<math.h>
int main()
{
   int n;
   while(scanf("%d",&n)!=EOF)
   {
       int y = sqrt(n); ///find the squareroot of the number
       int i = 0; ///take count i from 0 it mean start from past
       int t = 0;
       while(y>=i) ///loop until counter is less than or equal to sqrt
       {
       int s = i*i+y*y;  ///find the squre of two numbers
       if(s==n)
       {
           t = 1;
           break; ///if matched then break;
       }
       else if(s>n)
       {
          y--; ///if product of the two number is bigger than sqrt --;
       }
       else i++; ///or counter ++
       }
   if(t==1) printf("YES\n"); ///then print
   else printf("NO\n");
   }

    return 0;
}

