#include<stdio.h>
int p10(long int a)
{
    int x = 0;
    int s = 0;
    for(long int i = a;i<=600000;i++)
    {
        if(isprime(i))
        {
            s+=i;
            x++;
            //printf("%d %d\n",i,s);
        }
        if(x == 10) break;
    }
    return s;

}
int isprime(int a)
{

    for(int i = 2;i<a;i++)
    {
        if(a%i == 0) return 0;
    }
    return 1;
}
int main()
{
   long int a;
   scanf("%d",&a);
   long int x = p10(a);
   printf("%d km/h\n",x);
   int ab = (60000000/x);
   printf("%d h /",ab);
   int da = ab/24;
   printf(" %d d\n",da);


    return 0;
}
