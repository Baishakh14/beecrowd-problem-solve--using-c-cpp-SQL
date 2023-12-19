#include <stdio.h>

int main() {
    double amount;
    scanf("%lf", &amount);

    int totalCents = (int)(amount * 100);

    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", totalCents / 10000);
    totalCents %= 10000;

    printf("%d nota(s) de R$ 50.00\n", totalCents / 5000);
    totalCents %= 5000;

    printf("%d nota(s) de R$ 20.00\n", totalCents / 2000);
    totalCents %= 2000;

    printf("%d nota(s) de R$ 10.00\n", totalCents / 1000);
    totalCents %= 1000;

    printf("%d nota(s) de R$ 5.00\n", totalCents / 500);
    totalCents %= 500;

    printf("%d nota(s) de R$ 2.00\n", totalCents / 200);
    totalCents %= 200;

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", totalCents / 100);
    totalCents %= 100;

    printf("%d moeda(s) de R$ 0.50\n", totalCents / 50);
    totalCents %= 50;

    printf("%d moeda(s) de R$ 0.25\n", totalCents / 25);
    totalCents %= 25;

    printf("%d moeda(s) de R$ 0.10\n", totalCents / 10);
    totalCents %= 10;

    printf("%d moeda(s) de R$ 0.05\n", totalCents / 5);
    totalCents %= 5;

    printf("%d moeda(s) de R$ 0.01\n", totalCents);

    return 0;
}

