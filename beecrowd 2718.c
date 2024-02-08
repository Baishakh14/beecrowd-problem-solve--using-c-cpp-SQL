#include <stdio.h>

#define ull unsigned long long

int main() {
    ull n, x, rem;
    scanf("%llu", &n);
    for (ull i = 0; i < n; ++i) {
        scanf("%llu", &x);
        ull k = 0;
        ull max_sequence = 0;
        while (x) {
            rem = x % 2;
            if (rem == 1)
                k++;
            else
                k = 0;
            if (k > max_sequence)
                max_sequence = k;
            x = x / 2;
        }
        printf("%llu\n", max_sequence);
    }
    return 0;
}

