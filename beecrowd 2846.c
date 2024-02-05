#include<stdio.h>
#define ms 100100
long long  f[ms]; ///fib number
long long fn[ms]; ///fibonot marketing
void fib();
int main()
{
   int n;
   fib();
   scanf("%d",&n);
   printf("%lld\n",fn[n]);

    return 0;
}
void fib()
{
    int i, j, k;
    f[0] = 0;
    f[1] = 1;

    // Generate Fibonacci numbers
    for (i = 2; i < ms; i++)
        f[i] = f[i - 1] + f[i - 2];


    // Generate Fibonot numbers
    for (i = 1, j = 2, k = 1; i < ms; i++){
        if (f[j] != i){
            fn[k++] = i;
        }
         else
            j++; // Move to the next Fibonacci number
    }


}


