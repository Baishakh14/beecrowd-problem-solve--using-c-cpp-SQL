#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    double perUnitPrice[N];

    for (int i = 0; i < N; i++) {
        double P, G;
        scanf("%lf %lf", &P, &G);
        perUnitPrice[i] = P / G;
    }

    double minPrice = perUnitPrice[0];
    for (int i = 1; i < N; i++) {
        if (perUnitPrice[i] < minPrice) {
            minPrice = perUnitPrice[i];
        }
    }

    printf("%.2f\n", minPrice * 1000);
    return 0;
}

