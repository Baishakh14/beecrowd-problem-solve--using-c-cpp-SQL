#include<stdio.h>
int find_carry(unsigned long long a,unsigned long long b)
{
    unsigned long long ab,bc,c = 0; ///initial carry is 0;
    int t = 0;
    while(a>0 || b>0)
    {
        ab = a%10; ///last digit of number a;
        bc = b%10; ///last digit of number b;
        a = a/10;  ///after getting last digit update the last digit and remove the last digit by divide by 10
        b = b/10;
        if(ab+bc+c>=10) ///if last digits + carry bit is greater than 10 then there is carry;
        {
            c = 1;
            t++;  ///the ammount of carry value;
        }
        else c = 0; /// else no carry;
    }
    return t;
}
int main()
{
    unsigned long long a,b;
    while(scanf("%llu %llu",&a,&b)&&(a||b))
    {
      int c = find_carry(a,b);
      if(c==0) printf("No carry operation.\n");
      else if(c==1) printf("1 carry operation.\n");
      else
        printf("%d carry operations.\n",c);

    }

    return 0;
}

