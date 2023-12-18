#include<stdio.h>
int main()
{
  while(1)
  {
    char a;
    int b;
    char c[10];
    int co = 0;
    int t = 0;
    int al[100]; ///store all value 0
  int n;
  scanf("%d",&n);
    for(int i = 0;i<100;i++)
    {
        al[i] = 0;
    }
  if(n==0) break;
  else {
        for(int i = 0;i<n;i++)
        {
    scanf(" %c %d %s",&a,&b,c);
   if(c[0]=='c')        ///if it is correct
   {
       al[(int)a]+=b;  ///find the int value of a and store it in al[position] and plus its point
       t+=al[(int)a]; ///find the total point
       co++;          ///count the right correct
   }
   else
   {
       al[(int)a]+=20; ///incorrect count if correct comes and it add to total point other wise stored in al[position] and increament the valo in al[position]
   }
        }
  }

    printf("%d %d\n",co,t); ///print total point and the correct value
      n--;
  }




    return 0;
}

