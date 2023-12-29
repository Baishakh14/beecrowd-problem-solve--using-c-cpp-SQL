#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLowercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    char vet_n[n][101]; // Assuming max length of each string is 100
    char vet_m[m][101]; // Assuming max length of each string is 100

    for (int i = 0; i < n; i++) {
        scanf("%s", vet_n[i]);
        toLowercase(vet_n[i]);
    }

    for (int i = 0; i < m; i++) {
        scanf("%s", vet_m[i]);
        toLowercase(vet_m[i]);
    }

    for (int i = 0; i < n; i++) {
        int aux = 0;
        char aux_inv[101];
        int l = strlen(vet_n[i]);
        int j = 0;

        for (int k = l - 1; k >= 0; k--) {
            aux_inv[j] = vet_n[i][k]; //i is number k is character length
            j++;
        }
        aux_inv[j] = '\0'; // Null-terminate the reversed string

        for (int j = 0; j < m; j++) {
            if (strstr(vet_m[j], vet_n[i]) != NULL || strstr(vet_m[j], aux_inv) != NULL) {
                aux = 1;
                break;
            }
        }

        if (aux) {
            printf("Sheldon come a fruta %s\n", vet_n[i]);
        } else {
            printf("Sheldon detesta a fruta %s\n", vet_n[i]);
        }
    }

    return 0;
}
