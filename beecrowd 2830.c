#include <stdio.h>

int main() {
    int mestreKung, mestreLu;
    scanf("%d %d", &mestreKung, &mestreLu);

    if ((mestreLu - 1) / 2 == (mestreKung - 1) / 2)
        printf("oitavas\n");
    else if ((mestreLu - 1) / 4 == (mestreKung - 1) / 4)
        printf("quartas\n");
    else if ((mestreLu - 1) / 8 == (mestreKung - 1) / 8)
        printf("semifinal\n");
    else
        printf("final\n");

    return 0;
}

