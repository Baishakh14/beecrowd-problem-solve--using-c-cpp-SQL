#include <stdio.h>

int main() {
    int Cw, Cd, Cg, Fw, Fd, Fg;
    scanf("%d %d %d %d %d %d", &Cw, &Cd, &Cg, &Fw, &Fd, &Fg);

    int C = Cw * 3 + Cd;
    int F = Fw * 3 + Fd;

    if (C == F) {
        if (Cg == Fg) {
            printf("=\n");
        } else if (Cg > Fg) {
            printf("C\n");
        } else {
            printf("F\n");
        }
    } else if (C > F) {
        printf("C\n");
    } else {
        printf("F\n");
    }

    return 0;
}

