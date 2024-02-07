#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    int t = 1;

    while (n--) {
        char a[100];
        int b[3];

        scanf("%s", a); // Read the operation string
        for (int i = 0; i < 3; i++) {
            scanf("%d", &b[i]); // Read three integers
        }

        if (strcmp(a, "min") == 0) {
            int m = b[0];
            for (int i = 1; i < 3; i++) {
                if (b[i] < m)
                    m = b[i];
            }
            printf("Caso #%d: %d\n", t, m);
        } else if (strcmp(a, "max") == 0) {
            int ma = b[0];
            for (int i = 1; i < 3; i++) {
                if (b[i] > ma)
                    ma = b[i];
            }
            printf("Caso #%d: %d\n", t, ma);
        } else if (strcmp(a, "mean") == 0) {
            int s = 0;
            for (int i = 0; i < 3; i++) {
                s += b[i];
            }
            printf("Caso #%d: %d\n", t, s / 3);
        } else if (strcmp(a, "eye") == 0) {
            int e = (b[0] * 0.3 + b[1] * 0.59 + b[2] * 0.11);
            printf("Caso #%d: %d\n", t, e);
        }
        t++;
    }

    return 0;
}

