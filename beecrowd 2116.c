#include<stdio.h>
#include<stdbool.h>
bool prime(int a) ///check its prime or not taking a int to check if its prime or not.if prime return true.if not return false
{
    for(int i = 2;i<a;i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}
int big(int arr[],int s) ///taking the array and size then find the nearest prime number
{
    int b = arr[0]; ///let think the first index of array is bigger.and check which is bigger
    for(int i = 1;i<s;i++)
    {
       if(arr[i]>b) b = arr[i]; ///if bigger then store it in b means now it the biggest array
    }
    return b; ///return the top value;
}
int main()
{
    int n,m; ///taking the number from array
    int j = 0;
    int k = 0;
    scanf("%d %d",&n,&m);
    int a[n],b[m]; ///making a array and make a number of these array
    for(int ia = 0;ia<=n;ia++)
    {
        if(prime(ia)) ///check is the number is prime
        {
            a[j] = ia; ///if prime then store in a array and the counter is upgrading
            j++; ///so that next prime can store
        }
    }
        for(int ja = 0;ja<=m;ja++)
    {
        if(prime(ja))
        {
            b[k] = ja; ///same logic using in the second number;
            k++;
        }
    }
  int c,d;
  c = big(a,j); ///find the nearest biggest prime number
  d = big(b,k);///same here
  printf("%d\n",c*d); ///print them using *;
    return 0;
}

