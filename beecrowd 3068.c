#include <stdio.h>

int main() {
    int t = 1;
    while (1) {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        if (x1 == y1 && y1 == x2 && x2 == y2 && y2 == 0)
            break;

        int met = 0;
        int n;
        scanf("%d", &n);

        while (n > 0) {
            int m1, m2;
            scanf("%d %d", &m1, &m2);
            if (m1 >= x1 && m1 <= x2 && m2 <= y1 && m2 >= y2)
                met++;
            n--;
        }

        printf("Teste %d\n%d\n", t, met);
        t++;
    }
    return 0;
}

