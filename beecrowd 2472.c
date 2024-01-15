#include <stdio.h>
int main() {
   long long int L, N;
    scanf("%lld %lld", &L, &N);
   long long int result = ((L - N + 1) * (L - N + 1)) + N - 1;
   printf("%lld\n", result);

    return 0;
}

