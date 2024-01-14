#include <stdio.h>

int main() {
    int D, I, X, F;
    scanf("%d %d %d %d", &D, &I, &X, &F);

    if (D % 2 == 0 && F % 2 == 0) {
        printf("%d\n", I);
    } else if (D % 2 == 0 && F % 2 == 1) {
        printf("%d\n", I - X);
    }
    if (D % 2 == 1 && F % 2 == 0) {
        printf("%d\n", I);
    }
    if (D % 2 == 1 && F % 2 == 1) {
        printf("%d\n", I + X);
    }

    return 0;
}

