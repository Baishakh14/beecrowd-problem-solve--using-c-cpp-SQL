#include <stdio.h>

void arred(double m, double p, double max7, double max10) {
    if (m / p >= 4.0 && m / p < 7.0) {
        if (max7 > m / p)
            printf("%.2lf\n", max7);
        else
            printf("%.2lf\n", m / p);
    } else {
        if (max10 > m / p)
            printf("%.2lf\n", max10);
        else
            printf("%.2lf\n", m / p);
    }
}

int main() {
    int t, p, n, i, j;
    double m, x, max7, max10;

    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &p, &n);

        for (i = 0; i < n; i++) {
            m = max7 = max10 = 0;
            for (j = 0; j < p; j++) {
                scanf("%lf", &x);
                m += x;
                if (max10 < x)
                    max10 = x;
                if (max7 < x && x < 7.0)
                    max7 = x;
            }

            if (m / p < 4.0)
                printf("%.2lf\n", m / p);
            else
                arred(m, p, max7, max10);
        }
    }

    return 0;
}

