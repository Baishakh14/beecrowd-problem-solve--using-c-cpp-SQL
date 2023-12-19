#include <stdio.h>
#include <string.h>
#define MAXSIZE 110

char string[MAXSIZE];

int main() {
    int aux = 0;
    while (scanf("%s", string) != EOF) {
        if (strcmp(string, "<br>") == 0) {
            printf("\n");
            aux = 0;
        } else if (strcmp(string, "<hr>") == 0) {
            if (aux > 0) {
                printf("\n");
                aux = 0;
            }
            printf("--------------------------------------------------------------------------------\n");
        } else {
            if (aux == 0) {
                printf("%s", string);
                aux += strlen(string);
            } else {
                if (aux + strlen(string) >= 80) {
                    printf("\n%s", string);
                    aux = 0;
                    aux += strlen(string);
                } else {
                    printf(" %s", string);
                    aux += strlen(string) + 1;
                }
            }
        }
    }

    if (aux > 0) {
        printf("\n");
    }

    return 0;
}

