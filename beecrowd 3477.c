#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if (x * x == y * y + z * z) {
        double area = (y + 3.0 * z / 4.0) * z / 2.0;
        printf("AREA = %d\n", (int)area);
    } else {
        printf("Nao eh retangulo!\n");
    }

    return 0;
}

