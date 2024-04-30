#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Discard the newline character left in the input buffer

    while (n--) {
        char ab[50][50];
        int i = 0;
        char *bc;
        char a[3000];
        cin.getline(a, sizeof(a)); // Use getline() to read the whole line

        bc = strtok(a, " ");
        while (bc != NULL) {
            strcpy(ab[i], bc);
            bc = strtok(NULL, " ");
            i++;
        }

        // Sorting the words based on length using bubble sort
        for (int j = 0; j < i - 1; j++) {
            for (int x = 0; x < i - 1 - j; x++) {
                int s = strlen(ab[x]);
                int l = strlen(ab[x + 1]);
                if (l > s) {
                    char abc[100];
                    strcpy(abc, ab[x]);
                    strcpy(ab[x], ab[x + 1]);
                    strcpy(ab[x + 1], abc);
                }
            }
        }

        // Printing the sorted words
        for (int j = 0; j < i; j++) {
            cout << ab[j];
            if (j < i - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
