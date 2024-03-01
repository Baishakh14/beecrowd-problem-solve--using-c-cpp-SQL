#include <stdio.h>
#include<math.h>
//int min(int a, int b) {
//    return a < b ? a : b;
//}
//
//int max(int a, int b) {
//    return a > b ? a : b;
//}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
        int e = fmin(a, b);
        int f = fmin(c, d);

        e += f;
        int g = fmin((int)fmax(a, b), (int)fmax(c, d));

        int h = fmin(e, g);

        printf("%d\n", h * h);
    return 0;
}

