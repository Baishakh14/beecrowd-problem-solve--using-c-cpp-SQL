#include <stdio.h>

int main() {
    int P1, C1, P2, C2;
    scanf("%d %d %d %d", &P1, &C1, &P2, &C2);

    int leftPerson = P1 * C1;
    int rightPerson = P2 * C2;

    if (leftPerson == rightPerson) {
        printf("0\n");
    } else if (leftPerson < rightPerson) {
        printf("1\n");
    } else {
        printf("-1\n");
    }

    return 0;
}

