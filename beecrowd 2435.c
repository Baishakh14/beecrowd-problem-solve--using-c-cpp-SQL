#include <stdio.h>

int main() {
    int a, b, c, d, e, f;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &d, &e, &f);
    if (b / (float)c < e / (float)f)
        printf("%d\n", a);
    else
        printf("%d\n", d);
    return 0;
}

