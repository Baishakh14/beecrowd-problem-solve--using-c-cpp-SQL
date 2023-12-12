#include <stdio.h>
#include <stdlib.h>

int main() {
    int p, n, temp1, temp2;//Jumping frog game in c
    scanf("%d %d", &p, &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        temp1 = a[i];
        temp2 = a[i + 1];
        int check = abs(temp1 - temp2);

        if (check <= p) {
            count++;
        }
    }

    if (count == n-1) {
        printf("YOU WIN\n");
    } else {
        printf("GAME OVER\n");
    }

    return 0;
}

