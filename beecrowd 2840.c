#include <stdio.h>

int main() {
    long long int r, gas, total;
    double volume;

    scanf("%lld %lld", &r, &gas);

    volume = (4 * 3.1415 * (r * r * r)) / 3;
    total = gas / volume;

    printf("%lld\n", total);

    return 0;
}

