#include<stdio.h>
#include<string.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n > 0) {
        char a[51];
        scanf(" %[^\n]", a);  // Read the entire line including spaces

        char *p = strtok(a, " "); // Tokenize using space as delimiter
        while (p != NULL) {
            printf("%c", p[0]); // Print the first character of each token
            p = strtok(NULL, " "); // Move to the next token
        }
        printf("\n"); // Print a newline after processing each line

        n--;
    }
    return 0;
}

