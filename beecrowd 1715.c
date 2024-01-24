#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int count = 0;
    for (int i = 0; i < N; ++i) {
        int goals;
        int all_goals = 1;
        for (int j = 0; j < M; ++j) {
            scanf("%d", &goals);
            if (goals == 0) {
                all_goals = 0;
            }
        }
        if (all_goals) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}

