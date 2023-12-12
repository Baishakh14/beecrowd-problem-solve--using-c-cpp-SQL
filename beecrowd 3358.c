#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    int n;
    scanf("%d", &n);
    char a[42], b[42];

    while(n > 0) {
        int t = 0;
        scanf(" %s", a);
        strcpy(b, a);

        for(int i = 0; i < strlen(a); i++) {
            if (tolower(a[i]) != 'a' && tolower(a[i]) != 'e' && tolower(a[i]) != 'i' && tolower(a[i]) != 'o' && tolower(a[i]) != 'u') {
                t++;
                if (t == 3) {
                    printf("%s nao eh facil\n", b);
                    break;
                }
            } else {
                t = 0; // Reset t if a vowel is encountered
            }
        }

        if (t < 3) {
            printf("%s eh facil\n", b);
        }

        n--;
    }

    return 0;
}

