#include <stdio.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
        int e = min(a, b);
        int f = min(c, d);

        e += f;
        int g = min(max(a, b), max(c, d));

        int h = min(e, g);

        printf("%d\n", h * h);
    return 0;
}

